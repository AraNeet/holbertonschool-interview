# Merge Sort

## Description

In this project, you will implement the **Merge Sort** algorithm to sort a list or array. Merge Sort is a divide-and-conquer algorithm with a time complexity of O(n log n), making it an efficient sorting algorithm for large datasets.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on **Ubuntu 14.04 LTS**
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra` and `-pedantic`
- All your files should end with a new line
- A `README.md` file at the root of the folder of the project is mandatory
- Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than **5 functions per file**
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc., is **totally forbidden**.
- The prototypes of all your functions should be included in your header file called `sort.h`
- Don’t forget to push your header file
- All your header files should be **include guarded**

### Functionality

- A list or array does not need to be sorted if its size is less than 2.
- Implement the **Merge Sort** algorithm to sort a list/array in ascending order.

## More Info

For this project, you are provided with the following `print_array` function to help with printing the array:

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
