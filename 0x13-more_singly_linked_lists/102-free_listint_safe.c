#include "lists.h"

/**
 * free_listint_safe - Safely releases a potentially looped linked list.
 * @head: A double pointer to the beginning of the list.
 *
 * Return: The total number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t nodes_freed = 0;
	int address_difference;
	listint_t *next_node;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		address_difference = *head - (*head)->next;
		if (address_difference > 0)
		{
			next_node = (*head)->next;
			free(*head);
			*head = next_node;
			nodes_freed++;
		}
		else
		{
			free(*head);
			*head = NULL;
			nodes_freed++;
			break;
		}
	}

	*head = NULL;

	return (nodes_freed);
}
