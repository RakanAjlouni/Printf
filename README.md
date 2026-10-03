*This activity has been created as part of the 42 curriculum by rajlouni.*

## Description

ft_printf is a custom implementation of the standard C library function `printf` built from scratch. The goal of this project is to learn how to use Variadic Functions in C to handle an indefinite number of arguments, while practicing clean code architecture and strict memory management. It will serve as an essential output tool.

**Library Details**
The library compiles into a single `libftprintf.a` archive. Below is a detailed description of every format specifier successfully handled by this custom function:

* **Format Specifiers:**
  * `%c`: Prints a single character.
  * `%s`: Prints a string.
  * `%p`: Prints a `void *` pointer argument in hexadecimal format.
  * `%d`: Prints a decimal (base 10) number.
  * `%i`: Prints an integer in base 10.
  * `%u`: Prints an unsigned decimal (base 10) number.
  * `%x`: Prints a number in hexadecimal (base 16) lowercase format.
  * `%X`: Prints a number in hexadecimal (base 16) uppercase format.
  * `%%`: Prints a literal `%` symbol.

* **Data Structure:** This project deliberately avoids complex allocated data structures. The primary data management relies on `va_list` (from `<stdarg.h>`) to sequentially access the variadic arguments. Pointer addresses (`%p`) are cast to `unsigned long long` to guarantee 64-bit address space compatibility.
* **Algorithm:** The core logic is a direct-write parser. The main loop iterates through the string, directly writing normal characters. Upon encountering a `%` symbol, a centralized `ft_dispatcher` evaluates the subsequent character and routes it to a format-specific helper function. For base-16 conversions (`%x`, `%X`, `%p`), a recursive mathematical algorithm divides the number by 16 and prints remainders as the stack unwinds, entirely avoiding the need for `malloc`.

## Instructions

1. **Get the files:** Clone the repository and navigate into the root directory.

2. **Compile:** Run `make` in your terminal. This uses `cc` with the strict `-Wall -Wextra -Werror` flags to compile the source code. The static library `libftprintf.a` is then created using the `ar rcs` command, as `libtool` is forbidden.

3. **Manage the build:**
   * Run `make clean` to remove temporary object files.
   * Run `make fclean` to wipe the object files and the compiled `libftprintf.a` file.
   * Run `make re` to completely rebuild the library from scratch.

4. **Include it:** To use this library in your own projects, add `#include "inc/ft_printf.h"` to your C files and compile your project alongside the `libftprintf.a` archive.

## Resources

* **Documentation:** cppreference.com, `man 3 stdarg`, and `man 2 write` were used as primary references for understanding variadic argument handling, data limits, and unbuffered output behaviors.
* **AI Usage:** AI was used for navigating logical traps and gaining a deep understanding of specific concepts. It also acted as a Socratic tutor when needed, adhering to the 42 curriculum directive to build reasoning skills rather than asking for direct answers.
