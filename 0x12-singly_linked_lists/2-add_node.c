#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Inserts a new node at the start of the linked list
  * @head: The current starting node of the list
  * @str: The string to insert into the new node
  *
  * Return: Address of the updated list or NULL on failure
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head && str)
	{
		newNode = malloc(sizeof(list_t));
		if (!newNode)
			return (NULL);

		newNode->str = strdup(str);
		newNode->len = _strlen(str);
		newNode->next = *head;

		*head = newNode;

		return (newNode);
	}

	return (NULL);
}

/**
  * _strlen - Calculates the length of a given string
  * @s: The string to evaluate
  *
  * Return: The length of the string
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
