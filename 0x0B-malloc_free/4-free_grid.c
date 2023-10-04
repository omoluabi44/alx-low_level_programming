#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the alloated memory
 *@grid: param
 *@height: param
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
