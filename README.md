# Libft - My C Standard Library
Implementation of some of the Standard C Library functions plus some Additional Functions.

### What is libft?
Libft is an individual project at [42](https://www.42sp.org.br) that requires us to re-write some [C standard library](https://www.tutorialspoint.com/c_standard_library/index.htm) functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

#### Objectives
- Unix logic

#### Skills
- Rigor
- Algorithms & AI
- Imperative programming

## Getting started
**Follow the steps below**
1. Clone the project and access the folder
```bash
git clone https://github.com/darlen-silva/libft-42sp
cd libft-42sp/
```
2. Run Make so you can build the library
```bash
make
```
3. Run Make with bonus if you want chained lists manipulation functions
```bash
make bonus
```
4. Compile your main with the library, example: (Don't forget to include the header "libft.h" in the file.)
```bash
cc -Wall -Wextra -Werror -o main main.c -L. -lft
```
5. Execute your program
```bash
./main
```
6. Clean output objects with
```bash
make fclean
```
### An example main.c
```c
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char    *str = "Hello World!";
    printf("My strlen:\t%zu\nSystem strlen:\t%zu\n", ft_strlen(str), strlen(str));
    return (0);
}
```
### Well done!
