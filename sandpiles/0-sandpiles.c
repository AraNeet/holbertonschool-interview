#include "sandpiles.h"

/**
 * _print_grid - prints a 3x3 grid
 * @grid: 3x3 grid to print
 *
 * Return: No return
 */
void _print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * grid_sum - computes the sum of two sandpiles
 * @grid1: first sandpile
 * @grid2: second sandpile
 *
 * Return: No return
 */
void grid_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] += grid2[i][j];
		}
	}
}

/**
 * is_stable - checks if a sandpile is stable
 * @grid: sandpile to check
 *
 * Return: 1 if stable, 0 if not
 */
int is_stable(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
				return (0);
		}
	}
	return (1);
}

/**
 * toppling - topples a sandpile
 * @grid: sandpile to topple
 *
 * Return: No return
 */
void toppling(int grid[3][3])
{
	int i, j;
	int grid_tmp[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
			{
				if (i - 1 >= 0)
					grid_tmp[i - 1][j]++;
				if (i + 1 < 3)
					grid_tmp[i + 1][j]++;
				if (j - 1 >= 0)
					grid_tmp[i][j - 1]++;
				if (j + 1 < 3)
					grid_tmp[i][j + 1]++;
				grid[i][j] -= 4;
			}
		}
	}
	grid_sum(grid, grid_tmp);
}

/**
 * sandpiles_sum - computes the sum of two sandpiles
 * @grid1: first sandpile
 * @grid2: second sandpile
 *
 * Return: No return
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	grid_sum(grid1, grid2);

	while (!is_stable(grid1))
	{
		printf("=\n");
		_print_grid(grid1);
		toppling(grid1);
	}
}