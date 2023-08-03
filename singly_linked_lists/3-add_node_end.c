#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @str: list name
 * @head: head address
 * Return: new node address
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));


	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(str);
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
