#include "main.h"
/**
 *set_bit - set a bit at a given position
 *@n: param value passed
 *@index: index param
 *Return: either 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	unsigned int j = 0;

	if (index > sizeof(size_t) * 8)
		return (-1);
	j = j << index;
	*n = ((*n) | j);
	return (1);
}
