# Rain
[![Project Badge](https://img.shields.io/badge/Progress-0%25-red)](https://www.holbertonschool.com)

## Description

The **Rain** project challenges you to calculate how many square units of water will be retained after it rains, given the heights of walls represented as a list of non-negative integers. Each integer represents the height of a wall with a unit width of 1. The task is to compute the amount of water retained between the walls after the rain.

The problem requires an efficient approach to determine the amount of water trapped based on the height and positions of the walls.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/usr/bin/python3`
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the **PEP 8** style (version 1.7.x)
- **You are not allowed to import any module** (e.g., no `math`, `numpy`, etc.)
- All modules and functions must be documented
- All your files must be executable

## Tasks

### 0. Rain
**Mandatory**

Given a list of non-negative integers representing the heights of walls with unit width 1, as if viewing the cross-section of a relief map, calculate how many square units of water will be retained after it rains.

#### Prototype

```python
def rain(walls):
