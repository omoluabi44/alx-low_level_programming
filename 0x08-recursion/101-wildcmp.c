#include "main.h"
/**
 * wildcmp - compare two strings
 *@s1: string to be compare
 *@s2: second stringbto be compare
 *Return: return s1 and s2
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: If both strings are empty, they are identical*/
	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		return (1);
	}
	/*If s2 has a wildcard (*), explore both options*/
	if (*s2 == '*')
	{
		/*Option 1: Ignore the wildcard and continue comparing*/
		if (wildcmp(s1, s2 + 1))
		{
			return (1); /* string are identical*/
		}
		/*Option 2: Keep the wildcard and continue comparing*/
		if ((*s1 != '\0') && (wildcmp(s1 + 1, s2)))
		{
			return (1);/* string are identical */
		}

	} /* If s2 is not a wildcard, check if the current characters match */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/*If none of the conditions are met, the strings are not identical*/
	return (0);
}
