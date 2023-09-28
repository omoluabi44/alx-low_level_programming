#include "main.h"
/**
 * _puts_recursion - this function print string using recursive
 *@s: received incoming string to be passed by caling function
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
