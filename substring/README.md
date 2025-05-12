# Substring with Concatenated Words

## Description

This project involves writing a function that finds all possible substrings containing a list of words within a given string.

## Requirements

- **C**
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on **Ubuntu 14.04 LTS**
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra -pedantic`
- All your files should end with a new line
- Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called `substring.h`
- Don’t forget to push your header file
- All your header files should be include guarded

### Note

In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.

## Tasks

### 0. Substring with Concatenated Words

**Mandatory**

Write a function that finds all the possible substrings containing a list of words, within a given string.

**Prototype:** 
```c
int *find_substring(char const *s, char const **words, int nb_words, int *n);