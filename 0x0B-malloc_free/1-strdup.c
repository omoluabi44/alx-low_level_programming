#include "main.h"
#include "stdlib.h"
/**
 *_strdup - copy the content from param str to strdup
 *@str: value to be passed as param
 *Return: strdup.
 */
char *_strdup(char *str)
{

	char *strdup;
	int j, len = 0;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	strdup = malloc((len + 1) * sizeof(char));
	if (strdup == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len; j++)
	{
		strdup[j] = str[j];
	}
	return (strdup);
}
