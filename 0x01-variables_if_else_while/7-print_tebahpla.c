#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	char i;

	i = 'a';
	while (i < 'z')
		{
	putchar(i);
	i--;
		}
	return (0);
}
