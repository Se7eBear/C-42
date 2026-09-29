import sys


def report_error(message: str) -> None:
    sys.stdout.flush()
    sys.stderr.write(f"[STDERR] {message}\n")
    sys.stderr.flush()


def ask(prompt: str) -> str:
    sys.stdout.write(prompt)
    sys.stdout.flush()
    return sys.stdin.readline().strip()


def read_archive(name: str) -> str | None:
    print(f"Accessing file '{name}'")

    try:
        file = open(name, "r")
    except OSError as error:
        report_error(f"Error opening file '{name}': {error}")
        return None

    try:
        content = file.read()
    except (OSError, UnicodeDecodeError) as error:
        report_error(f"Error reading file '{name}': {error}")
        return None
    finally:
        file.close()

    print("---")
    print()
    print(content)
    print("---")
    print(f"File '{name}' closed.")
    return content


def transform(content: str) -> str:
    result = ""
    for line in content.splitlines():
        result += line + "#\n"
    return result


def save_archive(name: str, data: str) -> None:
    print(f"Saving data to '{name}'")

    try:
        file = open(name, "w")
    except OSError as error:
        report_error(f"Error opening file '{name}': {error}")
        print("Data not saved.")
        return

    try:
        file.write(data)
    except OSError as error:
        report_error(f"Error writing file '{name}': {error}")
        print("Data not saved.")
        return
    finally:
        file.close()

    print(f"Data saved in file '{name}'.")


def main() -> None:
    if len(sys.argv) != 2:
        report_error(f"Usage: {sys.argv[0]} <file>")
        return

    print("=== Cyber Archives Recovery & Preservation ===")
    content = read_archive(sys.argv[1])
    if content is None:
        return

    new_content = transform(content)
    print()
    print("Transform data:")
    print("---")
    print()
    print(new_content)
    print("---")

    target = ask("Enter new file name (or empty): ")
    if target == "":
        print("Not saving data.")
    else:
        save_archive(target, new_content)


if __name__ == "__main__":
    main()
