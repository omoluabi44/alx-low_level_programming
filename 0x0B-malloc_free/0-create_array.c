#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - function create array of specific and initialise with c.
 *@size: size of the array
 *@c: initialize the array with c.
 *Return: create_array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *create_array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
		printf("failed to allocate memory\n");
	}

	if (create_array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		create_array[i] = c;
	}
	return (create_array);
}
