#include "main.h"
/**
 * puts_half - this function print half of a string
 * @str: param to taking in input
 *Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int half;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}

	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
