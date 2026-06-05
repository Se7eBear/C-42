*This project has been created as part of the 42 curriculum by brde-car.*

## Description
Libft is the first project of the 42 curriculum. The goal is to create a custom C library containing a set of standard libc functions, as well as additional utility functions for string manipulation, memory management, and linked lists. This library will serve as a foundational tool for future projects in the curriculum.

## Instructions
To compile the library, ensure you have a standard C compiler (e.g., cc) and make installed.

1. Clone the repository:
   git clone <your_repository_url>
   cd libft

2. Compile the mandatory functions:
   make

This will generate the libft.a static library. To use it in other projects, include "libft.h" in your projects with .c

## Resources
* Documentation: Standard Linux manual pages (man command).
* AI Usage: Artificial Intelligence was utilized during the development of this project strictly as an educational assistant and debugging tool. AI helped to explain complex concepts (such as pointer manipulation and linked list traversal), clarify compilation errors, and analyze Valgrind logs to identify memory leaks. It was not used to generate the final submitted code blindly, but rather to guide the learning and troubleshooting process.

## Library Overview
A detailed breakdown of the library created for this project:

### Part 1 - Libc Functions
Re-implementations of standard C library functions to understand their internal workings.
* Character checks: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
* String manipulation: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr
* Memory manipulation: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp
* Conversions: ft_toupper, ft_tolower, ft_atoi
* Dynamic allocation: ft_calloc, ft_strdup

### Part 2 - Additional Functions
Custom utility functions tailored for string manipulation and output generation.
* String operations: ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri
* File descriptor operations: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

### Part 3 - Linked Lists
Functions designed to create, iterate, and manage a custom linked list data structure (t_list).
* ft_lstnew: Creates a new node.
* ft_lstadd_front / ft_lstadd_back: Adds a node to the beginning or end of the list.
* ft_lstsize: Counts the number of nodes.
* ft_lstlast: Retrieves the last node.
* ft_lstdelone / ft_lstclear: Frees the memory of a single node or the entire list.
* ft_lstiter: Applies a function to each node's content.
* ft_lstmap: Applies a function to each node, creating a new transformed list.
