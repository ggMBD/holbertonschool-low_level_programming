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
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	current = ht->array[index];
	while (current != NULL)
	{
		unsigned int i = 0;
		while (key[i] != '\0' && current->key[i] != '\0' && key[i] == current->key[i])
			i++;
		if (key[i] == '\0' && current->key[i] == '\0')
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
