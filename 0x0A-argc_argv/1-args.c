#include <stdio.h>
/**
 *main- this function get total arguement passed
 *@argc: count total element in argv
 *@argv: pointer of array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
