#include <stdio.h>
/**
 *main - this function print alphabet a to z exluding q and e
 *Return: return 0 if succeed
 */

int main(void)
{
	int alpha = 'a';

	while (alpha < 'z')
	{
		if (alpha != 'q' &&  alpha != 'e')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
