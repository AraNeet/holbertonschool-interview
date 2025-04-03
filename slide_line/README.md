# 2048 (Single Line) - Slide and Merge Game

This project involves replicating the mechanics of the 2048 game on a single horizontal line. The goal is to implement a function that can slide and merge an array of integers to the left or right, following the rules of the 2048 game.

## Project Overview

### Description

In this project, you will implement a function to slide and merge an array of integers, simulating the gameplay mechanics of the popular 2048 game. The function should be able to merge contiguous or zero-separated identical numbers when sliding left or right.

### Task
- **Function Prototype**: `int slide_line(int *line, size_t size, int direction);`
- **Direction Macros**:
  - `SLIDE_LEFT`
  - `SLIDE_RIGHT`
- Returns `1` on success, `0` on failure

### Requirements
- No dynamic memory allocation is allowed (no `malloc`, `calloc`, etc.)
- The function must handle both `SLIDE_LEFT` and `SLIDE_RIGHT` directions, failing if provided with any other input.

## Requirements

### General
- **Editors Allowed**: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 14.04 LTS**
- Code will be compiled using `gcc 4.8.4` with the flags `-Wall -Werror -Wextra -pedantic`
- Each file must end with a new line
- Code should adhere to **Betty** style guidelines, checked with `betty-style.pl` and `betty-doc.pl`
- No global variables are allowed
- Each file should contain no more than 5 functions
- Function prototypes should be included in `slide_line.h`
- All header files should be include guarded

### Usage
- `main.c` files provided in examples are for testing purposes and should not be pushed to your repository. Your code will be tested using different `main.c` files.
- Push `slide_line.h` to your repository, ensuring it includes both macros and function prototypes.

## Example Task
**0. Slide line**  
Reproduce the mechanics of the 2048 game on a single line by implementing the `slide_line` function to slide and merge integers in an array based on the provided direction.

## License

This project is part of a learning curriculum and is intended for educational purposes.