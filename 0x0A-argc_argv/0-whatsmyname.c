#include <stdio.h>
/**
 *main- this function print program name
 *@argc: count total element in argv
 *@argv: pointer of array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("no program\n");
	}
	return (0);
}
