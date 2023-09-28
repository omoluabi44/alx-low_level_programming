#include "main.h"
/**
 * factorial - this function get the factorial of input of paramter pass
 *@n: param to be pass to the function
 *Return: the factorial of input function
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
