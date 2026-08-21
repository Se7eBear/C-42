def ft_count_harvest_recursive(j: int, i: int) -> None:
    if j > i:
        print("Harvest time!")
        return
    print(f"Day {j}")
    ft_count_harvest_recursive(j + 1, i)
def ft_count_harvest_recursive() ->None:
    i = int(input("Days until harvest: "))
    ft_count_harvest_recursive(1, i)
