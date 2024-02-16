#include "hash_tables.h"
/**
 *hash_table_create - creating a new hash Table
 *@size: size  of the table
 *Return: address of the new created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Table;
	unsigned long int i;

	Table = malloc(sizeof(hash_table_t));

	if (Table == NULL)
	{
		return (NULL);
	}
	Table->size = size;

	Table->array = malloc(sizeof(hash_table_t *) * size);
	if (Table->array == NULL)
	{
		free(Table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		Table->array[i] = NULL;
	}
	return (Table);
}
