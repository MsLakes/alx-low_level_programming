#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Releases memory used by a linked list.
  * @head: The starting node of the linked list.
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
