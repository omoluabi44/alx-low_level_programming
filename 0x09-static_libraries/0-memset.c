#include <stdio.h>
/**
 * _memset - replace where s pointer to with value of b using lenghth of n
 *@s: pointer
 *@b: value to be replaced with
 *@n:length
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
