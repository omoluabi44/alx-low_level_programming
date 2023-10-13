#include "variadic_functions.h"
/**
 *sum_them_all - sum all the param meter passed
 *@n: number of arguement to be passed
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum  = 0;

	va_list hold;

	va_start(hold, n);

	for (i = 0; i < n; i++)
	{
		if (n != 0)
		{
			sum += va_arg(hold, const unsigned int);
		}
		else
		{
			return (0);
		}
	}
	va_end(hold);
	return (sum);
}
