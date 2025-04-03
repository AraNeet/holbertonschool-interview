#!/usr/bin/python3
"""
Module for Rain Task
"""


def rain(walls):
    """
    Given a list of non-negative integers representing walls of width 1,
    calculate how much water will be retained after it rains.

    - Prototype: def rain(walls)
    - walls is a list of non-negative integers.
    - Return: Integer indicating total amount of rainwater retained.
    - Assume that the ends of the list
    (before index 0 and after index walls[-1])
    are not walls, meaning they will not retain water.
    - If the list is empty return 0.
    """
    if not walls or not isinstance(walls, list):
        return 0

    l, water = len(walls), 0
    left, right = [0] * l, [0] * l

    left[0], right[l - 1] = walls[0], walls[l - 1]

    i, j = 1, l - 2

    while True:
        if i >= l or j <= -1:
            break

        left[i] = max(left[i - 1], walls[i])
        right[j] = max(right[j + 1], walls[j])

        i += 1
        j -= 1

    for i in range(l):
        water += min(left[i], right[i]) - walls[i]

    return water
