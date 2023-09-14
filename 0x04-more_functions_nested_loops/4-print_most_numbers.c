#include "main.h"
/**
 *print_most_numbers - print 1 to 9 exluding 2 and 4
 *Return:
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		if (a != '2' && a != '4')
			_putchar(a);
	_putchar('\n');
}
