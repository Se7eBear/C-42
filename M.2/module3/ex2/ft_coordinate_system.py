import math


def get_player_pos() -> tuple[float, float, float]:
    while True:
        raw = input("Enter new coordinates as floats in format 'x,y,z': ")
        parts = raw.split(",")

        if len(parts) != 3:
            print("Invalid syntax")
            continue

        values: list[float] = []
        for part in parts:
            try:
                values.append(float(part.strip()))
            except ValueError as error:
                print(f"Error on parameter '{part.strip()}': {error}")
                break

        if len(values) == 3:
            return (values[0], values[1], values[2])


def distance(p1: tuple[float, float, float],
             p2: tuple[float, float, float]) -> float:
    x1, y1, z1 = p1
    x2, y2, z2 = p2
    return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2 + (z2 - z1) ** 2)


def main() -> None:
    print("=== Game Coordinate System ===")
    try:
        print("\nGet a first set of coordinates")
        first = get_player_pos()
        print(f"Got a first tuple: {first}")
        x, y, z = first
        print(f"It includes: X={x}, Y={y}, Z={z}")
        print(f"Distance to center: {round(distance((0, 0, 0), first), 4)}")

        print("\nGet a second set of coordinates")
        second = get_player_pos()
        print("Distance between the 2 sets of coordinates: "
              f"{round(distance(first, second), 4)}")
    except (EOFError, KeyboardInterrupt):
        print("\nInput interrupted, leaving the game coordinate system.")


if __name__ == "__main__":
    main()
