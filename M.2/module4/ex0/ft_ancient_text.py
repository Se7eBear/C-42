import sys


def main() -> None:
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <file>")
        return

    name = sys.argv[1]
    print("=== Cyber Archives Recovery ===")
    print(f"Accessing file '{name}'")

    try:
        file = open(name, "r")
    except OSError as error:
        print(f"Error opening file '{name}': {error}")
        return

    try:
        content = file.read()
    except (OSError, UnicodeDecodeError) as error:
        print(f"Error reading file '{name}': {error}")
        return
    finally:
        file.close()

    print("---")
    print()
    print(content)
    print("---")
    print(f"File '{name}' closed.")


if __name__ == "__main__":
    main()
