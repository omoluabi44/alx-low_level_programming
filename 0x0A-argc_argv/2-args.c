#include <stdio.h>
/**
 *main- this function prints all arguments it receives.
 *@argc: count total element in argv
 *@argv: pointer of array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	/*(void) argv;*/
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}

	return (0);
}
