#include <stdio.h>
/**
 *main - printing two character  separted by , and space
 *Return: return 0 if succeeed
 */

int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '9')
	{
		while (j  <= '9')
		{
			putchar(i);
			putchar(j);
			j++;

			if (i < '8' || j < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
