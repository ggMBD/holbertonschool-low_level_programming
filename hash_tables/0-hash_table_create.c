#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of the array
 * Return: success h_table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	if (size == 0)
		return (NULL);

	h_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (h_table == NULL)
	{
		return (NULL);
	}
	h_table->size = size;
	h_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	return (h_table);
}
