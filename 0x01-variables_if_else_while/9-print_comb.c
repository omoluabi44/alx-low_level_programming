#include <stdio.h>
/**
 *main - printing 1 to 9 separted by , and space
 *Return: return 0 if succeeed
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
