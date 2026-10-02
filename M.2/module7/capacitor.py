from ex0 import CreatureFactory
from ex1 import (HealCapability, HealingCreatureFactory, TransformCapability,
                 TransformCreatureFactory)


def test_healing(factory: CreatureFactory) -> None:
    print("Testing Creature with healing capability")
    stages = (("base", factory.create_base()),
              ("evolved", factory.create_evolved()))
    for label, creature in stages:
        print(f" {label}:")
        print(creature.describe())
        print(creature.attack())
        if isinstance(creature, HealCapability):
            print(creature.heal())


def test_transform(factory: CreatureFactory) -> None:
    print("Testing Creature with transform capability")
    stages = (("base", factory.create_base()),
              ("evolved", factory.create_evolved()))
    for label, creature in stages:
        print(f" {label}:")
        print(creature.describe())
        print(creature.attack())
        if isinstance(creature, TransformCapability):
            print(creature.transform())
            print(creature.attack())
            print(creature.revert())


def main() -> None:
    test_healing(HealingCreatureFactory())
    print()
    test_transform(TransformCreatureFactory())


if __name__ == "__main__":
    main()
