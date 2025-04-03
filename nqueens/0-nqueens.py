#!/usr/bin/python3
import sys


def print_solution(solution):
    """Prints a solution in the required format"""
    print([[row, col] for row, col in enumerate(solution)])


def is_safe(solution, row, col):
    """
    Checks if a queen can be placed on the board at (row, col).
    """
    for r, c in enumerate(solution[:row]):
        if c == col or abs(c - col) == abs(r - row):
            return False
    return True


def solve_nqueens(n, row=0, solution=[]):
    """
    Recursively finds and prints all solutions for the N Queens problem.
    """
    if row == n:
        print_solution(solution)
        return

    for col in range(n):
        if is_safe(solution, row, col):
            solve_nqueens(n, row + 1, solution + [col])


def main():
    """Main function to validate input and solve the N Queens problem."""
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)

    try:
        n = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        sys.exit(1)

    if n < 4:
        print("N must be at least 4")
        sys.exit(1)

    solve_nqueens(n)


if __name__ == "__main__":
    main()
