#include "main.h"
/**
 *print_rev - this function print string in reverse orders
 *@s: params
 *Return:nothing
 */
void print_rev(char *s)
{
	int length = 0;
	int a;

	while (s[length] != '\0')
	{
		length++;
	}

	for (a = length - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
