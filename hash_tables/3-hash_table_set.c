#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Add an element to the hash table
 * @ht: The hash table
 * @key: The key to add/update
 * @value: The value to associate with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *current, *new_node;

	if (!ht || !key || !*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current && strcmp(key, current->key) == 0)
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
