#include "main.h"
#include <stdlib.h>

/**
 * *alloc_grid - function of a 2 dimensional array of integers
 * @width:element of the grid
 * @height:element of th grid
 * Return:  a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gid;
	int i;
	int j;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	gid = (int **)malloc(height  * sizeof(int *));
	if (gid == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		gid[i] = (int *)malloc(width * sizeof(int));
		if (gid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gid[j]);
			}
			free(gid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			gid[i][j] = 0;
		}
	}
	return (gid);
}
