#include "main.h"
/**
 * binary_to_uint - convert binery to an unsigned it
 *@b: param
 *Return: sum
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i = 0, j = 0, len = 0, sum = 0, pw = 1, base = 2;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--)
		pw = pw * base;
		sum = sum + (pw * (b[i] - 48));
		len--;
		pw = 1;
	}
	return (sum);
}
