#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: list
 * @index: index
 * Return: the nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current = head;

	for (; counter < index; counter++)
	{
		current = current->next;
	}
	return (current);
}
