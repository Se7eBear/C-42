*This project has been created as part of the 42 curriculum by brde-car.*

# ft_printf

## Description
The ft_printf project is a custom implementation of the standard C library function printf. The goal of this project is to learn about variadic functions in C and understand how formatting strings and variable numbers of arguments are parsed and processed.

## Instructions
To compile the library, ensure you have a standard C compiler (e.g., cc) and make installed.

1. Clone the repository:
   git clone <Repository>
   cd ft_printf

2. Compile the library:
   make

This will generate the libftprintf.a static library. To use it in other projects, include "ft_printf.h" in your C files and compile them with the library.

## Algorithm and Data Structure
* Algorithm: The algorithm consists of a linear parse of the format string. It prints normal characters directly. When a '%' is encountered, it checks the following character to determine the conversion specifier and fetches the corresponding argument using variadic macros, routing it to the appropriate output function.
* Data Structures: The project uses 'va_list' to handle an unknown number of arguments. It relies strictly on primitive types and pointers (e.g., char *) to remain memory efficient, avoiding complex structures.

## Resources
* Documentation: Standard Linux manual pages (man 3 printf, man 3 stdarg).
* AI Usage: Artificial Intelligence was utilized during the development of this project strictly as an educational assistant and debugging tool. It helped identify and provided structural guidance for documentation. It was not used to generate the final submitted code blindly.

## Project Overview
A detailed breakdown of the conversions implemented for this project:

* %c: Prints a single character.
* %s: Prints a string.
* %p: Prints a void pointer argument in hexadecimal format.
* %d: Prints a decimal (base 10) number.
* %i: Prints an integer in base 10.
* %u: Prints an unsigned decimal (base 10) number.
* %x: Prints a number in hexadecimal (base 16) lowercase format.
* %X: Prints a number in hexadecimal (base 16) uppercase format.
* %%: Prints a percent sign.
