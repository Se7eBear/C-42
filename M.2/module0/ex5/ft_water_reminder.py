def ft_water_reminder() -> None:
    ask1 = int(input("Day since last watering: "))
    if ask1 > 2:
        print("Water the plants!")
    else:
        print("Plants are fine")


ft_water_reminder()
