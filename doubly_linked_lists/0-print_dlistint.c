#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint
 * @h: list name
 * Return: node number (counter)
*/
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);

		counter++;
		h = h->next;
	}
	return (counter);
}