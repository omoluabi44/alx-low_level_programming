#include "main.h"


/**
 *_abs- get the absolute number of integer
 *@c:
 *Return: 0
 */
int _abs(int);

int _abs(int b)
{
	int c;

	if (b == 1)
	{
		int a = 1;

		c = a * b;
	}
	else
	{
		int a = -1;

		c = a * b;
	}
	return (c);
}
