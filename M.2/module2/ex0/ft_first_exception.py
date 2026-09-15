def input_temperature(temp_str: str) -> int:
    temperature = int(temp_str)
    return temperature


def test_temperature() -> None:
    print("=== Garden Temperature ===")
    print("")

    temp_str = "25"
    print(f"Input data is '{temp_str}'")

    try:
        temperature = input_temperature(temp_str)
        print(f"Temperature is now {temperature}°C")
        print("")
    except ValueError as error:
        print(f"Caught input_temperature error: {error}")
        print("")

    temp_str = "abc"
    print(f"Input data is '{temp_str}'")

    try:
        temperature = input_temperature(temp_str)
        print(f"Temperature is now {temperature}°C")
        print("")
    except ValueError as error:
        print(f"Caught input_temperature error: {error}")
        print("")
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
