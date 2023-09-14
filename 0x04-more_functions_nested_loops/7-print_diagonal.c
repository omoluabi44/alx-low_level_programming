#include "main.h"
/**
 *print_diagonal - this function print diagonal
 *@n: 0
 */
void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		int backslash;
		int space;

		for (backslash = 0; backslash < n; backslash++)
		{
			for (space = 0; space < n; space++)
			{
				if (space == backslash)
				{
					_putchar('\\');
				}
				else if (space < backslash)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
