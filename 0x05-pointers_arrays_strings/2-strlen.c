#include "main.h"
/**
 *_strlen - this function iterate over the 's' while is not eqaul '\0' it
 *increment length
 *@s: this is pointers
 *Return: the lenth of s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
