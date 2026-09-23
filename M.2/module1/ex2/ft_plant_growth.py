class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self.height = height
        self.age_days = age

    def show(self) -> None:
        print(
            f"{self.name}: {round(self.height, 1)}cm, "
            f"{self.age_days} days old"
        )

    def grow(self) -> None:
        self.height += 0.8

    def age(self) -> None:
        self.age_days += 1

    def simulate_day(self) -> None:
        self.grow()
        self.age()

    def simulate_days(self, days: int) -> float:
        initial_height = self.height
        for day in range(1, days + 1):
            print(f"=== Day {day} ===")
            self.simulate_day()
            self.show()
        return self.height - initial_height


def ft_plant_growth() -> None:
    plant1 = Plant("Rose", 25.0, 30)
    print("=== Garden Plant Growth ===")
    plant1.show()
    growth = plant1.simulate_days(7)
    print(f"Growth this week: {round(growth, 1)}cm")


if __name__ == "__main__":
    ft_plant_growth()
