#!/usr/bin/python3
"""Minimum Operations"""


def minOperations(n):
    """Minimum Operations"""
    if n <= 1:
        return 0

    num = 0
    copy = 0
    H = 1
    while H != n:
        if n % H == 0:
            copy = H
            H += copy
            # copy All and paste
            num += 2
        else:
            H += copy
            # paste
            num += 1

    return num
