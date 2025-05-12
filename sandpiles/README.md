# Sandpiles Project

## Description

This project implements a simulation of **sandpiles**, a mathematical model where grains of sand are distributed on a grid. When a grid cell contains more than 3 grains, it topples, redistributing grains to its neighboring cells. The project adds two 3x3 sandpile grids and ensures that the resulting grid is stable by applying the toppling process. It is written in **C** and developed using **Visual Studio**.

## Requirements

- **Visual Studio** with C/C++ support
- **gcc 4.8.4** (for cross-compilation on Linux)
- Operating System: **Ubuntu 14.04 LTS** (for testing and compilation)
- **Betty Style** for C (checked using `betty-style.pl` and `betty-doc.pl`)