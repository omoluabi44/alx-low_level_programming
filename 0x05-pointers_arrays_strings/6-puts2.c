#include "main.h"
/**
 * puts2- print first characters and others character
 * @str: input string
 * Return:
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0' && str[length - 1] != '\0')
	{
		_putchar(str[length]);
		length++;
		length++;
	}
	_putchar('\n');
}
