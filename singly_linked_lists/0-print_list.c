#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list name
 * Return: node number (counter)
*/
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf ("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);

		counter++;
		h = h->next;
	}
	return (counter);
}
