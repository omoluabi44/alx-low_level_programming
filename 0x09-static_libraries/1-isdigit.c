#include "main.h"
/**
 * _isdigit - this fuction check for digit
 *@c: arguement
 *Return: c
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
