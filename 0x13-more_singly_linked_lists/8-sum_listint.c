#include "lists.h"

/**
 * sum_listint - computes the total of all values in a listint_t list
 * @head: starting node of the linked list
 *
 * Return: accumulated sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		total += current_node->n;
		current_node = current_node->next;
	}

	return (total);
}
