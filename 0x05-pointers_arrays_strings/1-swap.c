#include <stdio.h>
/**
 *swap_int - this function swap two integer value using pointers
 *@a: store the value of *b
 *@b: store the value of tmp
 *Return:both *a and *b
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
