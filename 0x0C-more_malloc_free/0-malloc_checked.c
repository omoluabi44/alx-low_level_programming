#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - this function is to received param and checked for exit
 *@b: param to be passed
 *Return: malloc_function
 */
void *malloc_checked(unsigned int b)
{
	int *malloc_function;

	malloc_function = malloc(b);
	if (malloc_function == NULL)
	{
		exit(98);
	}

	return (malloc_function);
}
