#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function frees a list_t list
 * @head: pointer to the start of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *previous, *next;

	previous = head;
	while (previous != NULL)
	{
		next = previous->next;
		free(previous->str);
		free(previous);
		previous = next;
	}

}
