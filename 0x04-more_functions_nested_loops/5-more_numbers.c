#include<stdio.h>
//void more_numbers(void);
int main()
{
	int a;
	int b;
	int c;
	for (a = 0; a <= 9; a++)
		putchar(a + '0');

	for (b = 1; b ==1; b++)
	{
		for (c = 0; c <= 4; c++)
		{
			putchar(b +'0');
		
			putchar(c + '0');
		}
	}
	putchar('\n');
}
