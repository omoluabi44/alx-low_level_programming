#include "hash_tables.h"
/**
 *hash_table_print - print all elemeent in hash table
 *@ht: the table
 *Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first_pair = 1;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}

	printf("{");
	first_pair = 1;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (first_pair == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);

			first_pair = 0;

			current = current->next;
		}
	}
	printf("}\n");
}
