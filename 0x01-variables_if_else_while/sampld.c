#include<stdio.h>
int main(void)
{
	int a = '0';
	int b = a + '0';

	while ( a <= '9')
	{
		while ( b <= '9')
		{
			putchar(a);
			putchar(b);
			a++;
			b++;
		}
		//a++;
		//b++;
	}
	putchar('\n');
	return(0);
}
