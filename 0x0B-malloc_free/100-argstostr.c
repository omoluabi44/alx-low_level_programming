#include <stdlib.h>
#include "main.h"
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *result, *currentArg;
	int currentPosition = 0;
	int totalLength = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; ++i)
	{
		currentArg = av[i];
		while (*currentArg != '\0')
		{
			totalLength++;
			currentArg++;
		}

		totalLength++;
    }

	result = malloc(totalLength + 1); /* +1 for null terminator */
	if (result == NULL)
	{
		return (NULL);  /* Memory allocation failed */
	}

	/* Concatenate arguments with newline characters */

	for (i = 0; i < ac; ++i)
	{
		currentArg = av[i];
		while (*currentArg != '\0')
		{
			result[currentPosition++] = *currentArg++;
		}
		result[currentPosition++] = '\n';  /* Add newline character */
    }

    /* Add null terminator at the end */
	result[currentPosition] = '\0';

	return (result);
}
