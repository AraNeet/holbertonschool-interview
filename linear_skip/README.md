# Linear Search in Skip List
[![Project Badge](https://img.shields.io/badge/Progress-0%25-red)](https://www.holbertonschool.com)

## Description

This project focuses on implementing a linear search in a skip list. A skip list is a data structure that allows for faster searching than a standard singly linked list by incorporating an "express lane." The "express lane" enables a search operation to skip over nodes, improving the time complexity of search operations.

The task is to write a function that searches for a specific value in a sorted skip list of integers. The list is modified by adding an express lane, which helps optimize the search.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra -pedantic`
- All your files should end with a new line
- Your code should follow the [Betty style](https://github.com/holbertonschool/Betty) and will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- The prototypes of all your functions should be included in your header file called `search.h`
- Don't forget to push your header file
- All your header files should be include guarded

### Data Structures

Please define the following data structure in your `search.h` header file:

```c
#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);
skiplist_t *linear_skip(skiplist_t *head, int value);

#endif /* _SEARCH_H_ */
