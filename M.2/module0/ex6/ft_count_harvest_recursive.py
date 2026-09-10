def ft_count_harvest_recursive():
    days = int(input("Enter the number of days: "))

    def ft_count(j: int, i: int) -> None:
        if j > i:
            print("Harvest time!")
            return
        print(f"Day {j}")
        ft_count(j + 1, i)

    ft_count(1, days)
