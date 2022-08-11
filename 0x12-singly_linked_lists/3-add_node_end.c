#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function that finds the length of a string
 * @str: string
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int index;

	for (index = 0; str[index]; index++)
		;
	return (index);
}

/**
 * add_node_end - function that adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 * Return: success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
