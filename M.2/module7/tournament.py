from ex0 import AquaFactory, CreatureFactory, FlameFactory
from ex1 import HealingCreatureFactory, TransformCreatureFactory
from ex2 import (AggressiveStrategy, BattleStrategy, DefensiveStrategy,
                 InvalidStrategyError, NormalStrategy)

LABELS: dict[type, str] = {
    FlameFactory: "Flameling",
    AquaFactory: "Aquabub",
    HealingCreatureFactory: "Healing",
    TransformCreatureFactory: "Transform",
}


def label(opponent: tuple[CreatureFactory, BattleStrategy]) -> str:
    factory, strategy = opponent
    return f"({LABELS[type(factory)]}+{strategy.name.capitalize()})"


def battle(opponents: list[tuple[CreatureFactory, BattleStrategy]]) -> None:
    print("*** Tournament ***")
    print(f"{len(opponents)} opponents involved")
    try:
        for i in range(len(opponents)):
            for j in range(i + 1, len(opponents)):
                factory_one, strategy_one = opponents[i]
                factory_two, strategy_two = opponents[j]
                fighter_one = factory_one.create_base()
                fighter_two = factory_two.create_base()
                print()
                print("* Battle *")
                print(fighter_one.describe())
                print(" vs.")
                print(fighter_two.describe())
                print(" now fight!")
                strategy_one.act(fighter_one)
                strategy_two.act(fighter_two)
    except InvalidStrategyError as error:
        print(f"Battle error, aborting tournament: {error}")


def run(title: str,
        opponents: list[tuple[CreatureFactory, BattleStrategy]]) -> None:
    print(title)
    print("[ " + ", ".join(label(o) for o in opponents) + " ]")
    battle(opponents)


def main() -> None:
    flame = FlameFactory()
    aqua = AquaFactory()
    healing = HealingCreatureFactory()
    transform = TransformCreatureFactory()
    normal = NormalStrategy()
    aggressive = AggressiveStrategy()
    defensive = DefensiveStrategy()

    run("Tournament 0 (basic)", [(flame, normal), (healing, defensive)])
    print()
    run("Tournament 1 (error)", [(flame, aggressive), (healing, defensive)])
    print()
    run("Tournament 2 (multiple)",
        [(aqua, normal), (healing, defensive), (transform, aggressive)])


if __name__ == "__main__":
    main()
