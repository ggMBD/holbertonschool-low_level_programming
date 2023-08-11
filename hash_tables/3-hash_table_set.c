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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index], *new_node;
	size_t key_len = strlen(key), i;

	if (!ht || !key || !*key)
		return (0);
	while (current)
	{
		i = 0;
		while (current->key[i] && i < key_len && current->key[i] == key[i])
			i++;
		if (!current->key[i] && i == key_len)
		{
			free(current->value);
			current->value = strdup(value);
			return (current->value != NULL);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
