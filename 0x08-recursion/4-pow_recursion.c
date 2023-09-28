#include "main.h"
/**
 * _pow_recursion - this function get the power of given number
 *@x: the param to be passed this
 *@y: param used as based
 *Return: the value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
