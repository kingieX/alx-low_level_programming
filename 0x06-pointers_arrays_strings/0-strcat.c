#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: first paremeter
 * @src: second parameter
 * Return: a character
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len++])
		i++;

	for (i = 0; src[len]; len++)
	{
		dest[i++] = src[len];
	}
	dest[i] = '\0';
	return (dest);
}
