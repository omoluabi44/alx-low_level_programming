#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - concatenate two strings
 *@s1: input strings
 *@s2: input strings
 *@n: number of string to be copy from s2 to concat
 *Return: concat;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t  len1 = 0, len2 = 0, j, i;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len2 > n)
	{
		len2 = n;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
