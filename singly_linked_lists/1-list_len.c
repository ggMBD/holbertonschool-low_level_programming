#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: list name
 * Return: node number (counter)
*/
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
