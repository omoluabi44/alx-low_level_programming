#include "hash_tables.h"
/**
 * hash_table_get - add element to the hash table
 *@ht: the table to modified
 *@key: the key
 *Return: the 1 if success, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/**#get the key hash function*/
	unsigned long int new_key;
	hash_node_t *current_node;


	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	new_key = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[new_key];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}
	return (NULL);
}
