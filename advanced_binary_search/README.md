# Advanced Binary Search

## Description

In this project, you will implement an **Advanced Binary Search** algorithm, which is designed to find the index of a value in a sorted array of integers. This task challenges you to solve a problem where basic binary search does not necessarily return the index of the first occurrence of a value in the array. 

### Requirements

#### General
- **Allowed editors:** vi, vim, emacs
- All your files will be compiled on **Ubuntu 14.04 LTS**
- Your programs and functions will be compiled with **gcc 4.8.4** using the flags: `-Wall -Werror -Wextra -pedantic`
- All your files should end with a new line
- A **README.md** file, at the root of the folder of the project, is mandatory
- Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use **global variables**
- No more than **5 functions per file**
- You are only allowed to use the **printf** function from the standard library. Any call to another function (e.g., `strdup`, `malloc`, etc.) is forbidden.
- In the following examples, the **main.c** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, we won’t take them into account). We will use our own **main.c** files during compilation. These might differ from the one shown in the examples.
- The prototypes of all your functions should be included in your header file called `search_algos.h`.  
  Don’t forget to push your header file.
- Your header file should be **include guarded**.

## Tasks

### 0. Advanced Binary Search (Mandatory)

You may have noticed that **basic binary search** does not necessarily return the index of the first value in the array (if this value appears more than once). In this task, you need to implement a function that searches for a value in a sorted array of integers.

#### Prototype:
```c
int advanced_binary(int *array, size_t size, int value);
