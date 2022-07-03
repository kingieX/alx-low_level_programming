#include <stdio.g>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - printd all single number of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	char base;

	while (base < 10)
	{
		putchar(base);
		base++;
	}
	putchar("\n");
	return (0);
}
