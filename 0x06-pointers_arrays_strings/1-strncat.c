#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
