#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves node at a given index in a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Address of the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current = head;

	while (current && counter < index)
	{
		current = current->next;
		counter++;
	}

	return (current ? current : NULL);
}
