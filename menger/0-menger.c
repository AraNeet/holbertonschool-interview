#include "menger.h"
#include <stdio.h>
#include <math.h>

/**
 * one - Checks if indices are (1, 1), if so, then square is blank
 *
 * @i: Row Index
 * @j: Column Index
 *
 * Return: 1 if (1, 1), 0 otherwise
 */
int one(int i, int j)
{
	while (i != 0 && j != 0)
	{
		if (i % 3 == 1 && j % 3 == 1)
			return (0);
		i /= 3;
		j /= 3;
	}
	return (1);
}

/**
 * menger - Entry point
 *
 * @level: level of the Menger Sponge to draw
 *
 * Return: Nothing
 */
void menger(int level)
{
	int i, j, limit;

	if (level < 0)
		return;

	limit = pow(3, level);
	for (i = 0; i < limit; i++)
	{
		for (j = 0; j < limit; j++)
		{
			if (one(i, j) == 1)
				printf("%c", '#');
			else
				printf("%c", ' ');
		}
		printf("\n");
	}
}
