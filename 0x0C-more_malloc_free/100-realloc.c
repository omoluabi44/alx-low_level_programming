#include <stdlib.h>
#include "main.h"

/**
 *_realloc - reallocate memory
 *@ptr: the old ptr pointing to memory
 *@old_size: the old size to be reallocate
 *@new_size: new size to be allocated
 *Return: new pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr = ptr, *new_size_ptr;
	size_t i, maximum = new_size;

	if (ptr == NULL)
	{
		new_size_ptr = malloc(new_size);
		return (new_size_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	new_size_ptr = malloc(new_size);
		if (new_size_ptr == NULL)
			return (NULL);

	if (new_size > old_size)
	{
		maximum = old_size;
	}
	for (i = 0; i < maximum; i++)
	{
		new_size_ptr[i] = new_ptr[i];
	}
	free(ptr);
	return (new_size_ptr);
}
