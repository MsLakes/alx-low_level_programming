#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a node to the tail of the linked list
  * @head: The beginning of the linked list
  * @str: The string data for the new node
  *
  * Return: Address of the modified list or NULL if an error occurs
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str)
	{
		new_node = malloc(sizeof(list_t));
		if (!new_node)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;

		if (!*head)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			current = *head;
			while (current->next)
				current = current->next;

			current->next = new_node;
			return (current);
		}
	}

	return (NULL);
}

/**
  *  _strlen - Computes the length of the provided string
  * @s: The string to measure
  *
  * Return: Length of the string
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		c++;
		s++;
	}

	return (c);
}
