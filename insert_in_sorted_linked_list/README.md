# Insert in Sorted Linked List

## Project Overview

This project is designed for technical interview preparation. You are required to write a function in C that inserts a number into a sorted singly linked list.

## Requirements

- **Allowed Editors:** `vi`, `vim`, `emacs`
- **Operating System:** All files will be compiled on **Ubuntu 14.04 LTS**
- **Compiler:** Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra -pedantic`
- **Code Style:** Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`
- **Restrictions:**
  - You are not allowed to use global variables.
  - No more than 5 functions per file.
- **Other Requirements:**
  - All your files should end with a new line.
  - The prototypes of all your functions should be included in your header file called `lists.h`.
  - All your header files should be include guarded.
  - A `README.md` file, at the root of the folder of the project, is mandatory.
  - Don't forget to push your header file.

## Tasks

### 0. Insert in Sorted Linked List (Mandatory)

- **Task Objective:** Write a function in C that inserts a number into a sorted singly linked list.
  
- **Prototype:** 
  ```c
  listint_t *insert_node(listint_t **head, int number);