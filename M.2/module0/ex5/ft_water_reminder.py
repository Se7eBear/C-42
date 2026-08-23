def ft_water_reminder() -> None:
    ask1 = int(input("Day since last watering: "))
    if ask1 > 2:
        print("Water the plant!")
    else:
        print("Plant is fine.")
