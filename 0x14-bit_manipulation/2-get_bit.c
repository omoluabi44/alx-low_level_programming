#include "main.h"

/**
 *get_bit - return a bit at a given position
 *@n: param value passed
 *@index: index param
 *Return: either 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));
}
