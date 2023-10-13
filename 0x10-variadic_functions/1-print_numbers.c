#include "variadic_functions.h"
/**
 *print_numbers - sum all the param meter passed
 *@n: number of arguement to be passed
 *@separator: print string
 *Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int hold_num  = 0;

	va_list hold;

	va_start(hold, n);

	for (i = 0; i < n; i++)
	{
		hold_num = va_arg(hold, const unsigned int);
		printf("%d", hold_num);
		if (i  != (n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(hold);
}
