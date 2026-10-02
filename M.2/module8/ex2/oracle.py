import os
import sys

try:
    from dotenv import load_dotenv
    DOTENV_AVAILABLE = True
except ImportError:
    DOTENV_AVAILABLE = False

VARIABLES = ["MATRIX_MODE", "DATABASE_URL", "API_KEY", "LOG_LEVEL",
             "ZION_ENDPOINT"]
VALID_MODES = ("development", "production")
VALID_LEVELS = ("DEBUG", "INFO", "WARNING", "ERROR", "CRITICAL")
PRODUCTION_REQUIRED = ["DATABASE_URL", "API_KEY", "ZION_ENDPOINT"]


def system_overrides() -> list[str]:
    return [name for name in VARIABLES if os.environ.get(name)]


def load_env_file(warnings: list[str]) -> bool:
    if not DOTENV_AVAILABLE:
        warnings.append("python-dotenv not installed, using only system "
                        "environment variables")
        return False
    return bool(load_dotenv())


def read_config() -> dict[str, str]:
    return {name: os.environ.get(name, "").strip() for name in VARIABLES}


def resolve_mode(config: dict[str, str], warnings: list[str]) -> str:
    mode = config["MATRIX_MODE"].lower()
    if mode == "":
        warnings.append("MATRIX_MODE not set, defaulting to development")
        return "development"
    if mode not in VALID_MODES:
        warnings.append(f"MATRIX_MODE '{mode}' is invalid, defaulting to "
                        "development")
        return "development"
    return mode


def resolve_log_level(config: dict[str, str], mode: str,
                      warnings: list[str]) -> str:
    default = "DEBUG" if mode == "development" else "WARNING"
    level = config["LOG_LEVEL"].upper()
    if level == "":
        warnings.append(f"LOG_LEVEL not set, defaulting to {default}")
        return default
    if level not in VALID_LEVELS:
        warnings.append(f"LOG_LEVEL '{level}' is invalid, defaulting to "
                        f"{default}")
        return default
    return level


def check_required(config: dict[str, str], mode: str,
                   warnings: list[str]) -> None:
    missing = [name for name in PRODUCTION_REQUIRED if config[name] == ""]
    if not missing:
        return
    if mode == "production":
        print(f"ERROR: Missing required configuration in production: "
              f"{', '.join(missing)}")
        print("Set them in the system environment and run again.")
        sys.exit(1)
    for name in missing:
        warnings.append(f"{name} not set, using development fallback")


def describe_database(url: str) -> str:
    if url == "":
        return "Not configured (in-memory fallback)"
    if any(tag in url for tag in ("localhost", "127.0.0.1", "sqlite")):
        return "Connected to local instance"
    return "Connected to remote instance"


def describe_zion(endpoint: str) -> str:
    if endpoint.startswith(("http://", "https://")):
        return "Online"
    return "Offline (endpoint missing or invalid)"


def source_contains(secret: str) -> bool:
    if secret == "":
        return False
    try:
        with open(__file__, "r") as source:
            return secret in source.read()
    except OSError:
        return False


def security_check(config: dict[str, str], env_loaded: bool,
                   overrides: list[str]) -> None:
    print("Environment security check:")
    if source_contains(config["API_KEY"]):
        print("[WARN] API key found hardcoded in the source code")
    else:
        print("[OK] No hardcoded secrets detected")
    if env_loaded:
        print("[OK] .env file properly configured")
    else:
        print("[WARN] .env file not loaded (copy .env.example to .env)")
    if overrides:
        print("[OK] Production overrides active: " + ", ".join(overrides))
    else:
        print("[OK] Production overrides available")


def main() -> None:
    print()
    print("ORACLE STATUS: Reading the Matrix...")
    print()

    warnings: list[str] = []
    overrides = system_overrides()
    env_loaded = load_env_file(warnings)
    config = read_config()
    mode = resolve_mode(config, warnings)
    check_required(config, mode, warnings)
    level = resolve_log_level(config, mode, warnings)

    for message in warnings:
        print(f"WARNING: {message}")
    if warnings:
        print()

    policy = "strict" if mode == "production" else "relaxed"
    print("Configuration loaded:")
    print(f"Mode: {mode}")
    print(f"Policy: {policy}")
    print(f"Database: {describe_database(config['DATABASE_URL'])}")
    print("API Access: " + ("Authenticated" if config["API_KEY"]
                            else "Missing key"))
    print(f"Log Level: {level}")
    print(f"Zion Network: {describe_zion(config['ZION_ENDPOINT'])}")
    print()
    security_check(config, env_loaded, overrides)
    print()
    print("The Oracle sees all configurations.")


if __name__ == "__main__":
    main()
