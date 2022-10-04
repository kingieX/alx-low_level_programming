#include "main.h"
/**
 * _strspn - function that gets length of a prefix substring
 * @s: pointer
 * @accept: charecter
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a;

	for (i = 0; s[i]; i++)
	{
		for (a = 0; accept[a]; a++)
		{
			if (s[i] == accept[a])
				break;
		}
		if (!accept[a])
			break;
	}
	return (i);
}

