import random

ACHIEVEMENTS: list[str] = [
    "Crafting Genius", "Strategist", "World Savior", "Speed Runner",
    "Survivor", "Master Explorer", "Treasure Hunter", "Unstoppable",
    "First Steps", "Collector Supreme", "Untouchable", "Sharp Mind",
    "Boss Slayer", "Hidden Path Finder",
]


def gen_player_achievements() -> set[str]:
    count = random.randint(4, 8)
    return set(random.sample(ACHIEVEMENTS, count))


def main() -> None:
    print("=== Achievement Tracker System ===\n")
    players: list[tuple[str, set[str]]] = [
        ("Alice", gen_player_achievements()),
        ("Bob", gen_player_achievements()),
        ("Charlie", gen_player_achievements()),
        ("Dylan", gen_player_achievements()),
    ]

    for name, achievements in players:
        print(f"Player {name}: {achievements}")

    all_distinct: set[str] = set()
    for _, achievements in players:
        all_distinct = all_distinct.union(achievements)
    print(f"\nAll distinct achievements: {all_distinct}")

    common = players[0][1]
    for _, achievements in players:
        common = common.intersection(achievements)
    print(f"\nCommon achievements: {common}\n")

    for name, achievements in players:
        others: set[str] = set()
        for other_name, other_achievements in players:
            if other_name != name:
                others = others.union(other_achievements)
        print(f"Only {name} has: {achievements.difference(others)}")

    full_catalog = set(ACHIEVEMENTS)
    print()
    for name, achievements in players:
        print(f"{name} is missing: {full_catalog.difference(achievements)}")


if __name__ == "__main__":
    main()
