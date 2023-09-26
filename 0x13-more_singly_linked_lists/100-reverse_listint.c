#include "lists.h"

/**
 * reverse_listint - Inverts the order of a linked list.
 * @head: A double pointer pointing to the start of the list.
 *
 * Return: Pointer to the beginning of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}

	*head = previous_node;

	return (*head);
}
