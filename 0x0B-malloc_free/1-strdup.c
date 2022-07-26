#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		i++;
	copy = malloc(i * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
