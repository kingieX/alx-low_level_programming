#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that cincatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: result or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, l;
	char *s;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	c = a + b + 1;
	s = malloc(c * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < a; l++)
		s[l] = s1[l];
	for (l = 0; l < b; l++)
		s[l + a] = s2[l];
	s[a + b] = '\0';
	return (s);
}
