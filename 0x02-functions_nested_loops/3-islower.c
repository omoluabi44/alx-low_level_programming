#include "main.h"

/**
 * _isLower - this function passed c as arguement to main.c
 *@c: number to be checked.
 * Return: int
 */


int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);

}
