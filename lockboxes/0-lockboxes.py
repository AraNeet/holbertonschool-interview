#!/usr/bin/python3

def canUnlockAll(boxes: list) -> bool:

  # This storages the len of the boxes list
  boxeslen: int = len(boxes)

  # Then we create a list that storages all the unlocked boxes
  unlocked: list = [False] * boxeslen
  # We define the first boxes as opened
  unlocked[0] = True

  # Then we make a stack
  stack: list = [0]

  # while the stack
  while stack:
    # while pop the current box out
    current_box = stack.pop()

    # Then for the keys we have we opened the next box 
    for key in boxes[current_box]:
      if key < boxeslen and not unlocked[key]:
        unlocked[key] = True
        stack.append(key)

  # Then we return true if all the boxes are opened
  return all(unlocked)
