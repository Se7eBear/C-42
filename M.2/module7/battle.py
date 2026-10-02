from ex0 import AquaFactory, CreatureFactory, FlameFactory


def test_factory(factory: CreatureFactory) -> None:
    print("Testing factory")
    if not isinstance(factory, CreatureFactory):
        print("Error: not a creature factory")
        return
    base = factory.create_base()
    evolved = factory.create_evolved()
    for creature in (base, evolved):
        print(creature.describe())
        print(creature.attack())


def test_battle(first: CreatureFactory, second: CreatureFactory) -> None:
    print("Testing battle")
    fighter_one = first.create_base()
    fighter_two = second.create_base()
    print(fighter_one.describe())
    print(" vs.")
    print(fighter_two.describe())
    print(" fight!")
    print(fighter_one.attack())
    print(fighter_two.attack())


def main() -> None:
    flame = FlameFactory()
    aqua = AquaFactory()
    test_factory(flame)
    print()
    test_factory(aqua)
    print()
    test_battle(flame, aqua)


if __name__ == "__main__":
    main()
