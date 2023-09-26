#include "lists.h"

/**
 * delete_nodeint_at_index - Removes a node at a specific position in the list.
 * @head: A double pointer pointing to the start of the list.
 * @index: Position of the node to be deleted.
 *
 * Return: 1 if successful, or -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node = *head, *node_to_remove = NULL;
	unsigned int count = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous_node);
		return (1);
	}

	while (count < index - 1)
	{
		if (!previous_node || !(previous_node->next))
			return (-1);
		previous_node = previous_node->next;
		count++;
	}

	node_to_remove = previous_node->next;
	previous_node->next = node_to_remove->next;
	free(node_to_remove);

	return (1);
}
