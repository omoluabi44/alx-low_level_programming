#include "main.h"
/**
 * _strlen_recursion - getting string length using recursive
 *@s: this param received string from caling function
 *Return: the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
