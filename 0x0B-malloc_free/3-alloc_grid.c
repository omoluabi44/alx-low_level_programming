#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - two dimensional array
 *@width: of the array
 *@height: of the array
 * Return: alloc
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **alloc;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	alloc = malloc(height * sizeof(int *));
	if (alloc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(width * sizeof(int));

		if (alloc[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(alloc[j]);
			}
			free(alloc);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			alloc[i][j] = 0;
		}
	}
	return (alloc);
}
