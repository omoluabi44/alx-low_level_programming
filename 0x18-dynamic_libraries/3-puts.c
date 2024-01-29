#include "main.h"
/**
 * _puts - this function print the string in stdout follow by a new line
 * @str: the params
 *Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
