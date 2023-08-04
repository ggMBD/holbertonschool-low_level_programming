#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next_node = current->next;

		free(current);

		current = next_node;
	}
}
