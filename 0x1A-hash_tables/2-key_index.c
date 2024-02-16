#include "hash_tables.h"

/**
 *key_index - th function get the index of key in hash table
 *@key: the key
 *@size: size of the array
 *Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_key;

	new_key = hash_djb2((unsigned char *)key);

	return (new_key % size);
}
