class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self.height = height
        self.age = age

    def set_height(self, _height: float) -> None:
        if _height < 0:
            print(f"{self.name}: Error, height can't be negative")
            print("Height update rejected")
        else:
            self._height = _height
            print(f"Height updated: {self._height}cm")

    def get_height(self) -> float:
        return self._height

    def set_age(self, _age: int) -> None:
        if _age < 0:
            print(f"{self.name}: Error, age can't be negative")
            print("Age update rejected")
        else:
            self._age = _age
            print(f"Age updated: {self._age} days")

    def get_age(self) -> int:
        return self._age

    def show(self) -> None:
        print(f"{self.name}: {round(self.height, 1)}cm, {self.age} days old")

    def grow(self) -> float:
        self.height += 1.2
        return self.height

    def age_older(self) -> int:
        self.age += 1
        return self.age

    def s_day(self) -> None:
        self.grow()
        self.age_older()

    def simu_days(self, days: int) -> float:
        i = self.height
        for day in range(days):
            print(f"=== Day {day} ===")
            self.s_day()
            self.show()
        return self.height - i


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str,):
        super().__init__(name, height, age)
        self.color = color
        self.is_bloomed = False

    def show(self) -> None:
        super().show()
        print(f" Color {self.color}")
        if not self.is_bloomed:
            print(f" {self.name} is not bloomed yet")
        else:
            print(f" {self.name} is blooming beautifully")

    def to_bloom(self) -> None:
        print(f"[asking the {self.name} to bloom]")
        self.is_bloomed = True


class Tree(Plant):
    def __init__(
            self,
            name: str,
            height: float,
            age: int,
            trunk_diameter: float
    ):
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self.trunk_diameter}")

    def produce_shade(self) -> None:
        print(f"[asking the {self.name} to produce shade]")
        print(
            f"Tree Oak now produces a shade of {self._height}cm "
            f"long and {self.trunk_diameter}cm wide.")


class Vegetable(Plant):
    def __init__(
            self,
            name: str,
            height: float,
            age: int,
            harvest_season: str,
            nutritional_value: int = 0
    ):
        super().__init__(name, height, age)
        self.harvest_season = harvest_season
        self.nutritional_value = nutritional_value

    def show(self) -> None:
        super().show()
        print(f"Harvest season: {self.harvest_season}")
        print(f"Nutritional value: {self.nutritional_value}")

    def simulate_day(self) -> None:
        super().simulate_day()
        self.nutritional_value += 1


def ft_plant_types() -> None:
    print("=== Garden Plant Types ===")
    print("=== Flower")
    rose = Flower("Rose", 15, 10, "red")
    rose.show()
    rose.to_bloom()
    rose.show()
    print()
    print("=== Tree")
    oak = Tree("Oak", 200.0, 365, 5.0)
    oak.show()
    oak.produce_shade()
    print()
    print("=== Vegetable")
    tomato = Vegetable("Tomato", 5.0, 10, "april", 0)
    tomato.show()
    tomato.simulate_day()
    tomato.show()


if __name__ == "__main__":
    ft_plant_types()
