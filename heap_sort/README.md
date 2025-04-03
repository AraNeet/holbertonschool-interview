# Heap Sort
[![Project Badge](https://img.shields.io/badge/Progress-0%25-red)](https://www.holbertonschool.com)

**Amateur**  
By: Alexandre Gautier, Software Engineer at Holberton School  
Weight: 1  
Your score will be updated as you progress.

## Description

In this project, you will implement the Heap Sort algorithm to sort an array of integers in ascending order. The Heap Sort algorithm is an efficient comparison-based sorting algorithm that works by first building a binary heap and then repeatedly extracting the maximum (or minimum) element to rebuild the heap.

You are expected to use the **sift-down** method to implement the Heap Sort algorithm, ensuring that the array is sorted correctly while printing the array each time you swap two elements.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS using `gcc 4.8.4` with the flags `-Wall -Werror -Wextra` and `-pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the **Betty style** (version 1.7.x). It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are **not allowed to use global variables**
- No more than 5 functions per file
- You are **not allowed** to use the standard library for input/output functions (e.g., `printf`, `puts`, etc.)
- The prototypes of all your functions should be included in your header file called `sort.h`
- Don't forget to push your header file
- All your header files should be **include guarded**
- A list/array does not need to be sorted if its size is less than 2.

### More Information

For this project, you are given the following `print_array` function to print the array after each swap:

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
