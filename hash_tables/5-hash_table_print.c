#include "hash_tables.h"
/**
 * hash_table_print -function that prints a hash table
 * @ht: the hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int f_comma = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (!f_comma)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			f_comma = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
