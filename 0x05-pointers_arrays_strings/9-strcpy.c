#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination to which string is copied to
 * @src: source string to be copy
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
