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

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += i;
	}
	dest[len] = '\0';
	return (dest);
}
