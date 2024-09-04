#!/usr/bin/python3
"""
Determine if all the boxes in the given list can be unlocked.

Args:
    boxes (list): A list of boxes, where each box is
    represented as a list of keys.

Returns:
    bool: True if all the boxes can be unlocked, False otherwise.
"""


def canUnlockAll(boxes: list) -> bool:
    boxeslen: int = len(boxes)
    unlocked: list = [False] * boxeslen
    unlocked[0] = True
    stack: list = [0]
    while stack:
        current_box = stack.pop()
    for key in boxes[current_box]:
        if key < boxeslen and not unlocked[key]:
            unlocked[key] = True
            stack.append(key)
    return all(unlocked)
