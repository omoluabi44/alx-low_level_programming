#include <stdlib.h>
#include "main.h"

/**
 * _calloc - calloc function
 *@nmemb: number of block
 *@size: size of each block
 *Return: cal.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, j;
	char *cal;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	total = nmemb * size;

	cal = malloc(total);
	if (cal == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < total; j++)
	{
		cal[j]  = 0;
	}
	return (cal);
}
