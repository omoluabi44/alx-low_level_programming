#include <stdio.h>
#include "search_algos.h"
/**
 *binary_search - search for element in array using linear search
 *@array: the array
 *@size: size of the array
 *@value: the target
 *Return: index of the element if found else return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
		{
			printf("%d, ", array[mid]);
		}
		printf("%d\n", array[mid]);
		mid = left + (right - left) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
