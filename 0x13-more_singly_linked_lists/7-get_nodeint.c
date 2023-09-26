#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the node located at a specific position in the linked list
 * @head: starting node of the linked list
 * @index: position of the node to be fetched
 *
 * Return: address of the desired node, or NULL if not found
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
