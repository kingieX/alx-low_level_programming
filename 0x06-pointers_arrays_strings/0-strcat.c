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

	for (i = 0; src[len] != '\0'; len++)
	{
		dest[i++] = src[len];
	}
	dest[len] = '\0';
	return (dest);
}
