#include "main.h"
/**
 *print_sign - this function check for negative and positive numbers
 *@n: the value of input n
 *Return: 0 or 1 or -1
 */

int print_sign(int n)
{

	if (n > 0)
	{
		int b = '+';

		_putchar(b);
		return (1);
	}
	if (n < 0)
	{
		int a = '-';

		_putchar(a);
		return (-1);
	}
	if (n == 0)
	{
		int c = '0';

		_putchar(c);
		return (0);
	}
	return (0);
}
