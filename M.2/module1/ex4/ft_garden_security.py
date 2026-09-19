

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


def ft_garden_security() -> None:
    print("=== Garden Security System ===")
    plant = Plant("Rose", 15.0, 10)
    print("Plant created: ", end="")
    plant.show()
    print("")
    plant.set_height(25)
    plant.set_age(30)
    print("")
    plant.set_height(-12)
    plant.set_age(-12)
    print("")
    print("Current state: ", end="")
    plant.show()


if __name__ == "__main__":
    ft_garden_security()
