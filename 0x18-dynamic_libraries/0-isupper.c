#include "main.h"
/**
 * _isupper - this fuction check for uppercase
 *@c: arguement
 *Return: c
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
