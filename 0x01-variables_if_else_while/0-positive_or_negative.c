#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - this function generate positive and negative
 * Return: this will return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d this is positive \n", n);
	else if (n == 0)
		printf("%d this zero \n", n);
	else
		printf("%d this is negative \n", n);
	return (0);
}
