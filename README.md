# ft_printf

## Description
ft_printf is a project at 42 School, consisting of recoding the famous printf function from the C standard library. This implementation handles various conversion specifiers to format and print data.

## Table of Contents
- Features
- Installation
- Usage
- Functions

## Features
- Supports multiple conversion specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- Cross-platform handling of NULL pointers
- No memory leaks
- Follows 42's Norm coding standards

## Installation
Clone the repository and compile the library:

```bash
git clone https://github.com/matteo-genovese/ft_printf.git
cd ft_printf
make
```

To clean object files:
```bash
make clean
```

To clean everything (objects and library):
```bash
make fclean
```

To recompile:
```bash
make re
```

## Usage
Include the header in your C files:
```c
#include "ft_printf.h"
```

Compile your program with the library:
```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lftprintf -o your_program
```

Example usage:
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

## Functions

### Main Functions
- [`ft_printf`](ft_printf.c) - The main printf function that handles all formatting

### Helper Functions
- [`ft_putchar`](ft_putstr.c) - Output character to standard output
- [`ft_putstr`](ft_putstr.c) - Output string to standard output
- [`ft_putnbr`](ft_putnbr.c) - Output number to standard output
- [`ft_put_u_nbr`](ft_putnbr.c) - Output unsigned number to standard output
- [`ft_put_low_hexadecimal`](ft_printhex.c) - Output lowercase hexadecimal to standard output
- [`ft_put_upp_hexadecimal`](ft_printhex.c) - Output uppercase hexadecimal to standard output
- [`ft_putpointer`](ft_printhex.c) - Output memory address to standard output

### Utility Functions
- [`ft_strlen`](ft_aux.c) - Get string length
- [`ft_len_intnumber`](ft_aux.c) - Get length of integer
- [`ft_len_hexnumber`](ft_aux.c) - Get length of hexadecimal number
- [`ft_strdup`](ft_aux.c) - Duplicate string
- [`ft_strjoin`](ft_aux.c) - Join string with char

## Author
- Matteo Genovese ([mgenoves](https://profile-v3.intra.42.fr/users/mgenoves))

<img width="998" alt="Screen Shot 2024-02-21 at 12 16 12 PM" src="https://github.com/matteo-genovese/ft_printf/assets/67902487/53f1cd6c-e549-4b61-a4d1-1388b8d9d70b">
