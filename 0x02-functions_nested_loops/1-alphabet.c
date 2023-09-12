#include "main.h"
/**
 *print_alphabet - this function prototype will declare in the MAIN.H headers
 *file,this headers will be called in 1-alphabet.c
 *Return:0
 */

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
