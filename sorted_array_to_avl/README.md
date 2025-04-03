# Array to AVL

[![Project Badge](https://img.shields.io/badge/Progress-0%25-red)](https://www.holbertonschool.com)

## Description

This project focuses on building an AVL tree from a sorted array of integers. An AVL tree is a self-balancing binary search tree in which the difference between the heights of left and right subtrees cannot be more than one for all nodes.

The task is to create a function that takes a sorted array as input and converts it into an AVL tree. You must ensure that no duplicate values exist in the array, and the AVL tree must be built without rotating.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra -pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should follow the [Betty style](https://github.com/holbertonschool/Betty) and will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- The prototypes of all your functions should be included in your header file called `binary_trees.h`
- Don't forget to push your header file
- All your header files should be include guarded

### Data Structures

You should use the following data structures and types for binary trees. Make sure to include them in your header file.

#### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
