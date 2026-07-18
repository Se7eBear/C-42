*This project has been created as part of the 42 curriculum by smachado, brde-car.*

# Push_swap

## Description
The Push_swap project is an algorithm project that requires sorting data on a stack. We are provided with a set of integer values, two stacks (`a` and `b`), and a limited set of operations to manipulate both stacks.
The goal is to write a C program called `push_swap` which calculates and displays on the standard output the smallest sequence of operations that sorts the integers received as arguments, minimizing the total number of operations depending on the initial state (disorder) of the data.

## Instructions

### Compilation
To compile the project, run `make` at the root of the repository:
```bash
make
```
This will compile the `push_swap` executable. Other available rules are: `clean`, `fclean`, `re`.

### Execution
Run the program with a list of integers as arguments. You can also specify an optional strategy selector as the first argument.

```bash
./push_swap [strategy] <list_of_integers>
```

**Strategies:**
- `--simple`: Forces the use of the O(n^2) algorithm.
- `--medium`: Forces the use of the O(n√n) algorithm.
- `--complex`: Forces the use of the O(n log n) algorithm.
- `--adaptive`: Forces the use of the adaptive algorithm based on disorder. This is the default behavior if no selector is given.

**Example:**
```bash
./push_swap 2 1 3 6 5 8
```

To see the benchmark metrics (disorder percentage, strategy, total operations), use the `--bench` flag:
```bash
./push_swap --bench --adaptive 2 1 3 6 5 8
```

## Resources
- Big O Notation: [Wikipedia](https://en.wikipedia.org/wiki/Big_O_notation)
- Sorting Algorithms: [GeeksforGeeks](https://www.geeksforgeeks.org/sorting-algorithms/)
- Stack Data Structure: [Wikipedia](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))

**AI Usage:**
AI was used in this project primarily to generate this `README.md` file structure and content, and for research. No code was modified by AI.

## Algorithms Justification

The project implements four distinct sorting strategies to enforce a rigorous understanding of algorithmic complexity in terms of `push_swap` operations:

1. **Simple Algorithm (O(n^2)) - Selection Sort:**
   Implemented in `ft_selection_sort.c`. It works by repeatedly finding the minimum element from the unsorted stack and pushing it to the other stack. It is simple to implement but scales poorly for larger inputs, fitting the O(n^2) complexity class.

2. **Medium Algorithm (O(n√n)) - Chunk Sort:**
   Implemented in `chunk_sort.c`. This method divides the stack into multiple chunks (in relation to √n). It pushes numbers to stack `b` based on their chunk ranges, partially organizing them, and then pushes them back to `a` in the correct order. This significantly reduces the operation count for medium-sized lists compared to simple sort.

3. **Complex Algorithm (O(n log n)) - Radix Sort:**
   Implemented in `radix_sort.c`. The list is sorted by processing the individual bits of the indices of the numbers. By moving elements between stacks based on their bits from LSB to MSB, it guarantees an extremely stable and scalable approach that sorts large sets of elements (e.g., 500) well within the constraints, achieving O(n log n) operational complexity.

4. **Adaptive Algorithm:**
   This default behavior first calculates the **disorder** of the stack (from 0 to 1). Depending on the calculated threshold, it dynamically selects the most appropriate internal strategy (Simple, Medium, or Complex) to optimize both time and the final amount of operations required, respecting the complexity targets per regime.