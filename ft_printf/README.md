# ft_printf

## 📝 Description
This project is part of the 42 School curriculum. The goal is to recreate the printf() function from the C standard library. This implementation handles various format specifiers and provides similar functionality to the original printf().

## 🛠️ Supported Format Specifiers

- `%c` - Print a single character
- `%s` - Print a string
- `%p` - Print a pointer address in hexadecimal format
- `%d` - Print a decimal number
- `%i` - Print an integer in base 10
- `%u` - Print an unsigned decimal number
- `%x` - Print a number in hexadecimal format (lowercase)
- `%X` - Print a number in hexadecimal format (uppercase)
- `%%` - Print a percent sign

## 🚀 Usage

### Compilation

```bash
make # Compile the library
make clean # Remove object files
make fclean # Remove object files and the library
make re # Recompile the library
```

### Usage

1. Include the header in your C file:
```c
#include "ft_printf.h"
```
2. Compile your program with the library:
```bash
gcc my_program.c libftprintf.a -o my_program
```

3. Run your program:
```bash
./my_program
```

### Example
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, World!\n");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return 0;
}
```