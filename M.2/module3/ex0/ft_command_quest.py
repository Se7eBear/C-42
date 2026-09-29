import sys


def main() -> None:
    print("=== Command Quest ===")
    print(f"Program name: {sys.argv[0]}")

    args = sys.argv[1:]

    if len(args) == 0:
        print("No arguments provided!")
    else:
        print(f"Arguments received: {len(args)}")
        position = 1
        for arg in args:
            print(f"Argument {position}: {arg}")
            position += 1

    print(f"Total arguments: {len(sys.argv)}")


if __name__ == "__main__":
    main()
