#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char low;

	low = 'a';
	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	low = 'A';
	while (low <= 'Z')
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
