#include "hash_tables.h"
/**
 * hash_table_set - add element to the hash table
 *@ht: the table to modified
 *@key: the key
 *@value: the value to be added to the table
 *Return: the 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/**#get the key hash function*/
	unsigned long int new_key, i;
	hash_node_t *new_node;


	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_key = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(new_node->value);
		return (0);
	}

	for (i = new_key; ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key ) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}

	new_node->next = ht->array[new_key];
	ht->array[new_key] = new_node;

	return (1);
}
