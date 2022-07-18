#include "main.h"
/**
 * *_strpbrk - function that searches a string for any set of bytes.
 * @s: pointer
 * @accept: character
 * Return: byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, a;
	for (i = 0; s[i]; i++)
	{
		for (a = 0; accept[a]; a+)
		{
			if (s[i] == accept[a])
				break;
		}
		if (accept[a])
			return (s + i);
	}
	return (0);
}
