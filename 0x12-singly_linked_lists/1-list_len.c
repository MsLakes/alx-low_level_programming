#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len  - Determine the total number of items in a linked list
  * @h: Head to the linked list
  *
  * Return: The total count of items in the list
  */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h)
	{
		h = h->next;
		element_count++;
	}

	return (element_count);
}
