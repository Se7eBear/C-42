def ft_count_harvest_recursive(j: int, i: int) -> None:
    j = 0
    if j > i:
        print("Harvest time!")
        return
    print(f"Day {j}")
    ft_count_harvest_recursive(j + 1, i)
