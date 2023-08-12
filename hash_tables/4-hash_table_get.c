#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: The hash table
 * @key: The key you are looking for
 *
 * Return: value if successful, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
		return (NULL);

	while (strcmp(key, current->key) != 0)
	{
		current = current->next;
	}

	return (current->value);
}
