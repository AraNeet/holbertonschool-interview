# Wild Compare

![Project Badge](https://img.shields.io/badge/Project%20Status-Completed-green)

**Author:** Alexa Orrico, Software Engineer at Holberton School  
**Weight:** 1

## Description

This project implements a function that compares two strings and determines whether they can be considered identical. The comparison allows for the use of the special character `*`, which can match any string, including an empty string.

## Requirements

### General Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 14.04 LTS**
- Compilation with **gcc 4.8.4** using the following flags: `-Wall -Werror -Wextra -pedantic`
- All files must end with a new line.
- A `README.md` file is mandatory at the root of the project folder.
- Code must adhere to the **Betty style**. This will be checked using `betty-style.pl` and `betty-doc.pl`.
- **No global or static variables** are allowed.
- **No more than 5 functions per file**.
- The standard library should **not** be used.
- The project includes examples with `main.c` files. These files are for testing purposes and are not required to be pushed. Your repository will be compiled using our own `main.c` files.
- All function prototypes must be declared in the `holberton.h` header file. Make sure to push your header file to the repository.

### Restrictions
- **No loops** are allowed in the implementation.

## Tasks

### 0. Wild Compare (mandatory)

Write a function that compares two strings and returns `1` if the strings can be considered identical. Otherwise, return `0`. 

- **Prototype:** `int wildcmp(char *s1, char *s2);`
- **Input:** `s2` can contain the special character `*`.
- **Behavior of `*`:** The special character `*` can replace any string, including an empty string.

## Usage

To use this project, compile the provided `.c` files with the specified flags and include the header `holberton.h` in your code.

### Example:

```c
#include "holberton.h"

int main(void)
{
    char *str1 = "hello";
    char *str2 = "h*o";
    
    if (wildcmp(str1, str2))
    {
        printf("The strings are identical.\n");
    }
    else
    {
        printf("The strings are not identical.\n");
    }

    return 0;
}
