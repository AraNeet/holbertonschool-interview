# Palindrome Integer

## Description
This project is focused on determining whether a given unsigned integer is a palindrome, which means it reads the same forwards and backwards.

## Requirements

### General
- **Editors Allowed:** `vi`, `vim`, `emacs`
- **Compilation Environment:** Ubuntu 14.04 LTS
- **Compiler:** `gcc 4.8.4` with flags `-Wall -Werror -Wextra -pedantic`
- **Code Standards:** 
  - All files should end with a new line.
  - Code should adhere to the **Betty style** (checked using `betty-style.pl` and `betty-doc.pl`).
  - **No global variables** allowed.
  - **Maximum of 5 functions per file**.

### Main Files
- Example `main.c` files are provided to test functions but should not be pushed to the repository. The project will be compiled and tested with its own `main.c` files, which may differ from examples.

### Function Prototypes
- All function prototypes must be included in a header file named `palindrome.h`.
- All header files should be **include guarded**.

---

## Tasks

### 0. Palindrome Unsigned Integer (Mandatory)

Write a function that checks whether or not a given unsigned integer is a palindrome.

- **Prototype:** `int is_palindrome(unsigned long n);`
  - **Parameter:** `n` - the number to be checked.
  - **Return:** `1` if `n` is a palindrome, `0` otherwise.
- **Memory Constraints:** You are **not allowed** to allocate memory dynamically (i.e., no `malloc`, `calloc`, etc.).

### Example Usage
#### 0-main.c
```c
#include <stdlib.h>
#include <stdio.h>
#include "palindrome.h"

/**
 * main - Entry point
 *
 * @ac: Arguments counter
 * @av: Arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int ac, char **av)
{
    unsigned long n;
    int ret;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s arg\n", av[0]);
        return (EXIT_FAILURE);
    }
    n = (unsigned long)(atol(av[1]));
    ret = is_palindrome(n);
    printf("%lu is ", n);
    if (ret == 0)
        printf("not ");
    printf("a palindrome.\n");
    return (EXIT_SUCCESS);
}