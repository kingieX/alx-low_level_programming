#include "main.h"
/**
 * _islower - Entry point
 * Description - checks for lowercase character
 * Return: 1 or 0
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
