#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main- this function adds positive numbers but throw error if not positiveb
 *@argc: count total element in argv
 *@argv: pointer of array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc ; i++)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
