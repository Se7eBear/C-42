

class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self.height = height
        self.age = age

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


def ft_plant_factory() -> None:
    plant_list = [
        Plant("Rose", 20.0, 30.0),
        Plant("Oak", 200.0, 365.0),
        Plant("Cactus", 5.0, 90.0),
        Plant("SunFlower", 80.0, 45.0),
        Plant("Fern", 15.0, 120.0)
    ]
    for plant in plant_list:
        print("Created: ", end="")
        plant.show()


if __name__ == "__main__":
    ft_plant_factory()
