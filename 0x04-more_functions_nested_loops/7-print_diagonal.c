#include "main.h"
/**
 *print_line - this function print line
 *@n: 0
 */
void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		int j;
		for ( j = 1; j <= n; j++)
			_putchar(' ');
		_putchar('_');
		_putchar('\n');
	}
}
