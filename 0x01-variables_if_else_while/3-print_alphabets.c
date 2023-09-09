#include <stdio.h>
/**
 *main - this function print a to z and A to Z using loop
 *Return: return 0 if is success;
 */
int main(void)
{
	int alpha = 'a';
	int ALPHA = 'A';

	while (alpha <= 'z' && ALPHA < 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
