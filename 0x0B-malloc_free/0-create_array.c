#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars and
 * initializes it with a specific char.
 * @c: character
 * @size: size of array
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
