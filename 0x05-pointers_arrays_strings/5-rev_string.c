#include "main.h"
/**
 *rev_string - print in reverse
 *@s: the input string to be reversed
 *Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	while (start < length - 1)
	{
		temp = s[start];
		s[start] = s[length - 1];
		s[length - 1] = temp;
		start++;
		length--;
	}
}
