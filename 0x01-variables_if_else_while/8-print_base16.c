#include <stdio.h>
/**
 *main - printing hexadecimal
 *Return: return 0 if is success
 */

int main(void)
{
	int alpha = '0';
	int num = 'a';

	while (alpha <= '9')
	{
		putchar(alpha);
		alpha++;
	}
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
