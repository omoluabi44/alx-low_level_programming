#include "main.h"
/**
 *clear_bit - set a bit at a given position
 *@n: param value passed
 *@index: index param
 *Return: either 1 or 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	j = 1;
	j = j << index;
	if (index > sizeof(unsigned int) * 8 || n == NULL)
	{
		return (-1);
	}
	if (((*n >> index) & 1) == 1)
		*n = j ^ *n;

	return (1);
}
