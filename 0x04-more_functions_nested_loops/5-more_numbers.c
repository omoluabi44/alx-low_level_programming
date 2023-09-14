#include "main.h"
/**
 * more_numbers- this function print 1 to 14
 *Return: 0
 */

void more_numbers(void)
{
	int b;
	int c;

	for (b = 1; b <= 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar('1');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
