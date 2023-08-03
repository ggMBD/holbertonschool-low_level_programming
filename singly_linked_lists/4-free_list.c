#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: list
 * Return: void
*/
void free_list(list_t *head)
{
    list_t *current = head;

    while (current != NULL)
    {
        list_t *next_node = current->next;

        free(current->str);
        free(current);

        current = next_node;
    }
}
