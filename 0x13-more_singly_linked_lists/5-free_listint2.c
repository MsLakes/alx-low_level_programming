#include "lists.h"

/**
 * free_listint2 - deallocates a linked list and sets the head to NULL
 * @head: reference to the start of the listint_t list that's to be released
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (!head)
		return;

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;
}
