#include <stdio.h>
#define CAPACITY 50000

int hash_function(char *str)
{
	unsigned long i = 0;
	int j;

	for (j = 0; str[j]; j ++)
		i += str[j];

	return i % CAPACITY;
}


void main()
{
	int str;
	int str2;
	str = hash_function("Hel");
	str2 = hash_function("Cau");

	printf("%d-%d", str, str2);
}
