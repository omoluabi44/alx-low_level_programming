#include<stdio.h>
/**
 *main - this function iterate through ascii table and print base 10
 *Return:return 0 if success
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
