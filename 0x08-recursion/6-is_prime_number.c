#include "main.h"
/**
 *is_prime_number - this function cal the below function
 *@n: value to get prime number
 *@i: param
 *Return: the prime n
 */
int is_prime_number2(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}
	return (is_prime_number2(n, 2));
}

/**
 * is_prime_number2 - this function get the prime number of n
 *@n: prime numbee
 *@i: param
 *Return: to calling function
 */

int is_prime_number2(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_number2(n, i + 1));
}
