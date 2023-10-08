#include <stdlib.h>
#include "main.h"
/**
 *array_range - sub min from max and return min
 *@min: param
 *@max: param
 *Return: aray
 */
int *array_range(int min, int max)
{
	int length, i;
	int *aray;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min + 1;

	aray  = malloc(sizeof(int) * length);
	if (aray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		aray[i] = min;
		min++;
	}

	return (aray);
}
