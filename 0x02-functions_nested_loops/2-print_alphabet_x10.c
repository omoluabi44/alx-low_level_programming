#include "main.h"
/**
 *print_alphabet_x10-this function prototype will declare in the MAIN.H headers
 *file,this headers will be called in 2-main.c
 *Return:0
 */

void print_alphabet_x10(void)
{
	int alpha = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		alpha = 'a';
		i++;
		_putchar('\n');
	}
}
