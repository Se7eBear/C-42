class GardenError(Exception):
    def __init__(
        self, message: str = "Unknown garden error"
    ) -> None:
        super().__init__(message)


class PlantError(GardenError):
    def __init__(
        self, message: str = "Unknown plant error"
    ) -> None:
        super().__init__(message)


class WaterError(GardenError):
    def __init__(
        self, message: str = "Unknown water error"
    ) -> None:
        super().__init__(message)


def test_plant_error() -> None:
    raise PlantError("The tomato plant is wilting!")


def test_water_error() -> None:
    raise WaterError("Not enough water in the tank!")


def demo_specific_catches() -> None:
    print("Testing PlantError...")
    try:
        test_plant_error()
    except PlantError as error:
        print("Caught PlantError:", error)
    print()
    print("Testing WaterError...")
    try:
        test_water_error()
    except WaterError as error:
        print("Caught WaterError:", error)


def demo_catch_all() -> None:
    print("Testing catching all garden errors...")
    for func in (test_plant_error, test_water_error):
        try:
            func()
        except GardenError as error:
            print("Caught GardenError:", error)


if __name__ == "__main__":
    print("=== Custom Garden Errors Demo ===")
    print()
    demo_specific_catches()
    print()
    demo_catch_all()
    print()
    print("All custom error types work correctly!")
