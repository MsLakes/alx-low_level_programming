#include "lists.h"

/**
 * listint_len - computes the count of elements in a linked list
 * @h: pointer to the initial node of type listint_t to go through
 *
 * Return: count of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
