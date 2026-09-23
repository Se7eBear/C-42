class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self._height = 0.0
        self._age = 0
        if height < 0:
            print(f"{self.name}: Error, height can't be negative")
            print("Using default height: 0.0cm")
        else:
            self._height = height
        if age < 0:
            print(f"{self.name}: Error, age can't be negative")
            print("Using default age: 0 days")
        else:
            self._age = age

    def set_height(self, height: float) -> None:
        if height < 0:
            print(f"{self.name}: Error, height can't be negative")
            print("Height update rejected")
        else:
            self._height = height
            print(f"Height updated: {self._height}cm")

    def get_height(self) -> float:
        return self._height

    def set_age(self, age: int) -> None:
        if age < 0:
            print(f"{self.name}: Error, age can't be negative")
            print("Age update rejected")
        else:
            self._age = age
            print(f"Age updated: {self._age} days")

    def get_age(self) -> int:
        return self._age

    def show(self) -> None:
        print(
            f"{self.name}: {round(self.get_height(), 1)}cm, "
            f"{self.get_age()} days old"
        )

    def grow(self) -> None:
        self._height += 0.8

    def age(self) -> None:
        self._age += 1


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
