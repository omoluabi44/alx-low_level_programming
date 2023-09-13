#include "main.h"
/**
 *print_last_digit- print last digit
 *@c: arguement passed
 *Return: last
 */
int print_last_digit(int c)
{
	int last = c % 10;

	if (c < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
