


#include<stdio.h>
/**
 * main - this print 3 different character
 * Return: return 0 if succeed
 */

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int e = 0;

	while (a <= 9)
	{
		//b = a + 1;
		while (b <= 9)
		{
			//c = b + 1;
			while (c <= 9)
			{
				//e = c + 1;
				while (e <= 9)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					putchar(e + '0');
					e++;
					if (a < 7 || b < 8 || c < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
				e = c + 1;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
