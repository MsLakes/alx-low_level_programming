#include "lists.h"

/**
 * find_listint_loop - Locates a loop in a linked list.
 * @head: Pointer to the start of the list.
 *
 * Return: Address of the node where loop starts, or NULL if no loop exists.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = hare = head;

	if (!head)
		return (NULL);

	while (tortoise && hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}

	return (NULL);
}
