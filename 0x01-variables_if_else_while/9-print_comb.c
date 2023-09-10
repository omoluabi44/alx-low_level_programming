#include <stdio.h>
/**
 *main - printing 1 to 9 separted by , and space
 *Return: return 0 if succeeed
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
