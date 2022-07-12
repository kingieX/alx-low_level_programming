#include "main.h"
#include <stddef.h>
/**
 *_strlen - get the length of a string
 *@s: string pointer to pass to this function
 * Return: The length of *s
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
