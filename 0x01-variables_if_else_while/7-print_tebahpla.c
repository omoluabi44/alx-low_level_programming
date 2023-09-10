#include <stdio.h>
/**
 *main - this function print a to z using while loop
 * Return: return 0 if success
 */

int main(void)
{
	int Alpha_char = 'z';

	while (Alpha_char >= 'a')
	{
		putchar(Alpha_char);
		Alpha_char--;
	}
	putchar('\n');
	return (0);
}
