#include "main.h"
/**
 * _strstr - function that locates a string
 * @haystack: string
 * @needle: string
 * Return: substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, a = 0;

	while (haystack[i])
	{
		while (needle[a] && (haystack[i] == needle[0]))
		{
			if (haystack[i + a] == needle[a])
				a++;
			else
				break;
		}
		if (needle[a])
		{
			i++;
			a = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

