#include <stddef.h>
/**
 *array_iterator - function pointers to array
 *@array:param of array
 *@size: size of the arra
 *@action: pointer to array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
