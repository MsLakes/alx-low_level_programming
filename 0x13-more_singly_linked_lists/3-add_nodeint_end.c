#include "lists.h"

/**
 * add_nodeint_end - appends a new node at the tail of a linked list
 * @head: reference to the start of the list
 * @n: value to place in the new node
 *
 * Return: address of the newly created node, or NULL if an error occurs
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
