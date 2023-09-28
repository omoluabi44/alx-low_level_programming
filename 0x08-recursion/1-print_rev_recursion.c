#include "main.h"
/**
 * _print_rev_recursion - this function print string in reverse using recursive
 *@s: received incoming string to be passed by caling function
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
