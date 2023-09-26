#include "lists.h"

/**
 * pop_listint - removes the front node of a linked list
 * @head: reference to the start of the linked list
 *
 * Return: the value stored in the node that was removed,
 * or 0 if the list has no nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *node_to_remove;
	int value;

	if (!head || !*head)
		return (0);

	value = (*head)->n;
	node_to_remove = (*head)->next;
	free(*head);
	*head = node_to_remove;

	return (value);
}
