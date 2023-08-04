#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 * @n: number
 * @head: head address
 * Return: new node address
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));


	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
