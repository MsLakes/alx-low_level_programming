#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Determines the number of distinct nodes
 * in a possibly looped listint_t linked list.
 * @head: A pointer to the starting node of the listint_t list.
 *
 * Return: If the list isn't looped - 0.
 * Otherwise - the count of distinct nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node_count = 1;

	if (!head || !(head->next))
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				node_count++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				node_count++;
				slow = slow->next;
			}

			return (node_count);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list without causing an infinite loop.
 * @head: A pointer to the start of the listint_t list.
 *
 * Return: The count of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count, idx = 0;

	node_count = looped_listint_len(head);

	if (node_count == 0)
	{
		for (; head; node_count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < node_count; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node_count);
}
