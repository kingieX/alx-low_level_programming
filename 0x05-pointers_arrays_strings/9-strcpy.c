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
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
