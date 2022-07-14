#include "main.h"
/**
 * string_toupper - convert any sring string to uppercase
 * @k: string parameter
 * Return: string
 */
char *string_toupper(char *k)
{
	int i = 0;

	while (k[i])
	{
		if (k[i] >= 97 && k[i] <= 122)
			k[i] = k[i] - 32;
		i++;
	}
	return (k);
}
