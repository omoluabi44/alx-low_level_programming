# include "main.h"
/**
 *_sqrt_recursion - this function call on _sqrt_recursion1 to get square of n
 *@n: parmm
 *@base: param
 *Return: base
 */
int _sqrt_recursion1(int n, int base);

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion1(n, 1));
}
/**
 *_sqrt_recursion1 - call by amother function
 *@n: param n
 *@base: param base
 *Return: base
 */
int _sqrt_recursion1(int n, int base)
{
	if (base * base > n)
	{
		return (-1);
	}
	else if (base * base == n)
	{
		return (base);
	}
	else
	{
		return (_sqrt_recursion1(n, base + 1));
	}
}
