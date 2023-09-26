#include "lists.h"

/**
 * print_listint - displays all items of a given linked list
 * @h: the starting node of type listint_t to be displayed
 *
 * Return: the count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
