# RegEx

![Project Badge](https://img.shields.io/badge/Project%20Status-Completed-green)

**Author:** Alexandre Gautier, Software Engineer at Holberton School  
**Weight:** 1

## Description

This project implements a function that checks whether a given pattern matches a given string. The pattern matching is based on regular expressions with two special characters: `.` and `*`. 
- `.` matches any single character.
- `*` matches zero or more of the preceding character.

The function `regex_match(char const *str, char const *pattern)` returns `1` if the pattern matches the string, or `0` if it doesn’t.

## Requirements

### General Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 14.04 LTS**
- Compilation with **gcc 4.8.4** using the following flags: `-Wall -Werror -Wextra -pedantic`
- All files must end with a new line.
- A `README.md` file is mandatory at the root of the project folder.
- Code must adhere to the **Betty style**. This will be checked using `betty-style.pl` and `betty-doc.pl`.
- **No global variables** are allowed.
- **No more than 5 functions per file**.
- The standard library should **not** be used.
- The project includes examples with `main.c` files. These files are for testing purposes and are not required to be pushed. Your repository will be compiled using our own `main.c` files.
- All function prototypes must be declared in the `regex.h` header file. Make sure to push your header file to the repository.
- All header files must be include-guarded.

### Restrictions
- No loops are allowed in the implementation.

## Tasks

### 0. Simple RegEx (mandatory)

Write a function that checks whether a given pattern matches a given string.

- **Prototype:** `int regex_match(char const *str, char const *pattern);`
- **Input:** 
  - `str`: The string to scan.
  - `pattern`: The regular expression.
- **Output:** 
  - Return `1` if the pattern matches the string.
  - Return `0` if the pattern does not match.
- **Additional Notes:** 
  - `str` can be empty and can contain any ASCII character except `.` and `*`.
  - `pattern` can be empty and can contain any ASCII character, including `.` and `*`.
  - `.` matches any single character.
  - `*` matches zero or more of the preceding character.

### Example:

```c
#include <stdlib.h>
#include <stdio.h>

#include "regex.h"

#define TEST_MATCH(s, p)    do {\
    {\
        int res = regex_match(s, p);\
        printf("%s -> %s = %d\n", s, p, res);\
    }\
} while(0)

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
    TEST_MATCH("H", "H");
    TEST_MATCH("HH", "H");
    TEST_MATCH("HH", "H*");
    TEST_MATCH("HHHHHHHHHHHHHHHHH", "H*");

    TEST_MATCH("Holberton", ".*");
    TEST_MATCH("Alex", ".*");
    TEST_MATCH("Guillaume", ".*");
    TEST_MATCH("Julien", ".*");

    TEST_MATCH("Holberton", "Z*H.*");
    TEST_MATCH("Holberton", "Z*H.*olberton");
    TEST_MATCH("Holberton", "Z*H.*o.");
    TEST_MATCH("Holberton", "Z*H.*o");

    TEST_MATCH("Holberton", "holberton");
    TEST_MATCH("Holberton", ".olberton");

    TEST_MATCH("!H@o#l$b%e^r&t(o)n_", "!.@.#.$.%.^.&.(.)._");

    return (EXIT_SUCCESS);
}
