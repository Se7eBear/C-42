def ft_plant_age() -> None:
    ask1 = int(input("Enter plant age in days: "))
    if ask1 > 60:
        print("Plant is ready to harvest!")
    else:
        print("Plants needs more time to grow")
