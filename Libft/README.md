# Libft

## Description
Libft is a custom C library that implements various standard C library functions along with additional utility functions. This project is part of the 42 School curriculum and serves as a foundation for future C programming projects.

The library includes functions for:
- String manipulation
- Memory management
- Character checks
- Linked list operations
- Number conversions
- File descriptor operations

## Getting Started

### Prerequisites
- GCC compiler
- Make utility
- Unix-based operating system

### Installation
1. Clone the repository:
```bash
git clone https://github.com/ioztimur/libft.git
```

2. Navigate to the project directory:
```bash
cd libft
```

3. Build the library:
```bash
make # Compiles mandatory functions
make bonus # Compiles with bonus functions (linked list operations)
```
This will create `libft.a` static library.

### Usage
1. Include the header in your C file:
```c
#include "libft.h"
```
2. Compile your program with the library:
```bash
gcc my_program.c libft.a -o my_program
```
3. Run your program:
```bash
./my_program
```

## Function Categories

### Memory Functions
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memccpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### String Functions
- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strnstr
- ft_strncmp
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi

### Character Functions
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

### Number Functions
- ft_atoi
- ft_itoa

### File Descriptor Functions
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Linked List Functions (Bonus)
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## License
This project is part of the 42 School curriculum.