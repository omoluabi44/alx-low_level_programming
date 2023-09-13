#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int sexond, minutess, products, ten, one;

	for (sexond = 0; sexond <= 9; sexond++)
	{
		for (minutess = 0; minutess <= 9; minutess++)
		{
			products = sexond  * minutess;
			ten = products / 10;
			one = products % 10;

			if (minutess == 0)
			{
				_putchar('0');
			}
			else if (products < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(one + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ten + '0');
				_putchar(one + '0');
			}
		}
		_putchar('\n');
	}
}
