

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

    def simu_days(self, days: int) -> None:
        i = self.height
        for day in range(days):
            print(f"=== Day {day} ===")
            self.s_day()
            self.show()
        return self.height - i


def ft_plant_growth() -> None:
    plant1 = Plant("orquid", 20, 10)
    print("=== Garden Plant Growth ===")
    diff = plant1.simu_days(7)
    print(f"Growth of the week: {round(diff, 1)}cm")


if __name__ == "__main__":
    ft_plant_growth()
