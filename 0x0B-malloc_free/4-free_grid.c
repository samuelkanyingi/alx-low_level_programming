#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid:array of integers
 * @height: dimension side
 * Return: returns a pointer to a 2 dimensional array of integess
 */
void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
	{
		free(grid[p]);
	}
	free(grid);
}
