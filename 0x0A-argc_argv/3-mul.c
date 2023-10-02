#include <stdio.h>
#include <stdlib.h>
/**
 *main- this function multiplies two numbers.
 *@argc: count total element in argv
 *@argv: pointer of array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int number1;
	int number2;

	if (argc == 3)
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);
		printf("%d\n", number1 * number2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
