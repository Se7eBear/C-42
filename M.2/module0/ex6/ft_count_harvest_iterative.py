def ft_count_harvest_iterative() -> None:
    i = int(input("Days until harvest: "))
    j = 1;
    while j <= i:
        print(f"Day {j}")
        j += 1
    print("Harvest time!")
