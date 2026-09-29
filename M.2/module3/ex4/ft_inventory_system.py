import sys


def parse_inventory(args: list[str]) -> dict[str, int]:
    inventory: dict[str, int] = {}

    for arg in args:
        parts = arg.split(":")
        if len(parts) != 2 or parts[0] == "":
            print(f"Error - invalid parameter '{arg}'")
            continue

        name, raw_quantity = parts

        if name in inventory:
            print(f"Redundant item '{name}' - discarding")
            continue

        try:
            quantity = int(raw_quantity)
        except ValueError as error:
            print(f"Quantity error for '{name}': {error}")
            continue

        if quantity < 0:
            print(f"Quantity error for '{name}': negative quantity")
            continue

        inventory.update({name: quantity})

    return inventory


def main() -> None:
    print("=== Inventory System Analysis ===")
    inventory = parse_inventory(sys.argv[1:])

    if len(inventory) == 0:
        print("Inventory is empty - nothing to analyze.")
        return

    print(f"Got inventory: {inventory}")
    items = list(inventory.keys())
    print(f"Item list: {items}")

    total = sum(inventory.values())
    print(f"Total quantity of the {len(inventory)} items: {total}")

    for item in items:
        percent = inventory[item] / total * 100 if total > 0 else 0.0
        print(f"Item {item} represents {round(percent, 1)}%")

    most = items[0]
    least = items[0]
    for item in items:
        if inventory[item] > inventory[most]:
            most = item
        if inventory[item] < inventory[least]:
            least = item
    print(f"Item most abundant: {most} with quantity {inventory[most]}")
    print(f"Item least abundant: {least} with quantity {inventory[least]}")

    inventory.update({"magic_item": 1})
    print(f"Updated inventory: {inventory}")


if __name__ == "__main__":
    main()
