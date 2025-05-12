# Linked List Cycle

## Description

This project involves solving the problem of detecting cycles in a singly linked list. In particular, you are tasked with writing a function that determines if a given linked list contains a cycle. This is a common technical interview question and requires an efficient solution that avoids extra memory usage and unnecessary complexity.

## Learning Objectives

- Understand and implement basic linked list operations.
- Detect a cycle in a singly linked list using Floyd's Tortoise and Hare algorithm.
- Write efficient, memory-optimized C code adhering to standard coding conventions (Betty style).

## Requirements

- **Allowed editors**: `vi`, `vim`, `emacs`
- The code will be compiled on **Ubuntu 14.04 LTS** using `gcc 4.8.4` with the flags `-Wall -Werror -Wextra -pedantic`.
- Your programs must follow the **Betty style** guidelines, which will be checked using `betty-style.pl` and `betty-doc.pl`.
- You are not allowed to use global variables.
- Maximum of 5 functions per file.
- All function prototypes should be included in a header file called `lists.h`.

## Project Files

### `lists.h`

This header file contains the necessary structure definition for the singly linked list and function prototypes.

```c
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */