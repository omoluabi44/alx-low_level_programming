#include "variadic_functions.h"
/**
 *print_strings - print strg
 *@n: number of arguement to be passed
 *@separator: print string
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *hold_strg;

	va_list hold;

	va_start(hold, n);

	for (i = 0; i < n; i++)
	{
		hold_strg = va_arg(hold, char *);
		if (hold_strg != NULL)
		{
			printf("%s", hold_strg);
		}
		else
		{
			printf("(nil)");
		}
		if (i  != (n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(hold);
}
