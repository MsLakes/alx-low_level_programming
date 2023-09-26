#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a new node at a given position.
 * @head: A double pointer to the beginning of the list.
 * @idx: The index to add the new node at.
 * @n: The data for the new node.
 *
 * Return: If successful, a pointer to the newly added node.
 *         Otherwise, NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node, *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (count = 0; current && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}
	return (NULL);
}
