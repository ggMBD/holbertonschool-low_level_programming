#include "lists.h"
/**
 * dlistint_len - function that returns the number of nodes
 * @h: list name
 * Return: node number (counter)
*/
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
