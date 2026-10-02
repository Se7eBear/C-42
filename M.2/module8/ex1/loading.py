import importlib
import importlib.metadata
from types import ModuleType

PACKAGES: list[tuple[str, str]] = [
    ("pandas", "Data manipulation"),
    ("numpy", "Numerical computation"),
    ("matplotlib", "Visualization"),
]
OUTPUT_FILE = "matrix_analysis.png"
DATA_POINTS = 1000


def package_version(name: str, module: ModuleType) -> str:
    try:
        return importlib.metadata.version(name)
    except importlib.metadata.PackageNotFoundError:
        return str(getattr(module, "__version__", "unknown"))


def check_dependencies() -> tuple[dict[str, ModuleType],
                                  dict[str, str], list[str]]:
    modules: dict[str, ModuleType] = {}
    versions: dict[str, str] = {}
    missing: list[str] = []
    print("Checking dependencies:")
    for name, purpose in PACKAGES:
        try:
            module = importlib.import_module(name)
        except ImportError:
            print(f"[MISSING] {name} - {purpose} not available")
            missing.append(name)
            continue
        version = package_version(name, module)
        modules[name] = module
        versions[name] = version
        print(f"[OK] {name} ({version}) - {purpose} ready")
    return modules, versions, missing


def show_install_help(missing: list[str]) -> None:
    print()
    print(f"Missing dependencies: {', '.join(missing)}")
    print("Install them with one of the following:")
    print("  pip:    pip install -r requirements.txt")
    print("  Poetry: poetry install")
    print("          poetry run python loading.py")


def compare_managers(versions: dict[str, str]) -> None:
    print()
    print("Dependency management comparison:")
    print("  pip    -> requirements.txt: flat list of packages, no lock "
          "file,")
    print("            installs into the active environment")
    print("  Poetry -> pyproject.toml + poetry.lock: resolves and pins "
          "every")
    print("            version, creates and manages its own environment")
    print()
    print("Installed package versions:")
    for name, _ in PACKAGES:
        print(f"  {name}: {versions.get(name, 'not installed')}")


def analyze(modules: dict[str, ModuleType]) -> None:
    np = modules["numpy"]
    pd = modules["pandas"]
    matplotlib = modules["matplotlib"]

    print()
    print("Analyzing Matrix data...")
    rng = np.random.default_rng(42)
    signal = np.cumsum(rng.normal(0.0, 1.0, DATA_POINTS))
    frame = pd.DataFrame({"tick": np.arange(DATA_POINTS), "signal": signal})
    frame["trend"] = frame["signal"].rolling(window=50).mean()
    print(f"Processing {len(frame)} data points...")
    print(f"Mean: {float(frame['signal'].mean()):.2f} | "
          f"Std: {float(frame['signal'].std()):.2f} | "
          f"Min: {float(frame['signal'].min()):.2f} | "
          f"Max: {float(frame['signal'].max()):.2f}")

    print("Generating visualization...")
    matplotlib.use("Agg")
    plt = importlib.import_module("matplotlib.pyplot")
    figure, axes = plt.subplots(figsize=(10, 5))
    axes.plot(frame["tick"], frame["signal"], label="Matrix signal",
              alpha=0.6)
    axes.plot(frame["tick"], frame["trend"], label="50-tick trend",
              linewidth=2)
    axes.set_title("Matrix data analysis")
    axes.set_xlabel("Tick")
    axes.set_ylabel("Signal")
    axes.legend()
    figure.savefig(OUTPUT_FILE)
    plt.close(figure)

    print()
    print("Analysis complete!")
    print(f"Results saved to: {OUTPUT_FILE}")


def main() -> None:
    print()
    print("LOADING STATUS: Loading programs...")
    print()
    modules, versions, missing = check_dependencies()
    if missing:
        show_install_help(missing)
    else:
        try:
            analyze(modules)
        except (OSError, ValueError, KeyError) as error:
            print(f"Analysis failed: {error}")
    compare_managers(versions)


if __name__ == "__main__":
    main()
