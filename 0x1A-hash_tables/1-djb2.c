#include "hash_tables.h"
/**
 * hash_djb2 - create a hash value
 *@str: the string to be converted to hash value
 *Return: the hash Value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
