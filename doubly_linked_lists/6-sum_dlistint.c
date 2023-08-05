#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of numbers
 * @head: list name
 * Return: node number (counter)
*/
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}
