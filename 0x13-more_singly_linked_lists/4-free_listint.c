#include "lists.h"

/**
 * free_listint - deallocates a linked list from memory
 * @head: pointer to the start of the listint_t list that needs to be released
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
