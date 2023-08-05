#include "lists.h"
/**
 * insert_dnodeint_at_index - function that adds a new node at index
 * @n: number
 * @h: head address
 * @idx: index
 * Return: new node address
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int index = 1;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = current;
		current->prev = new_node;
		*h = new_node;
	}
	else
	{
		while (index < idx)
		{
			current = current->next;
			index++;
		}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	}
	return (new_node);
}
