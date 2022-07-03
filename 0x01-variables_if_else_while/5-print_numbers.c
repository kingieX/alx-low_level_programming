#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - printd all single number of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	char base;

	base = 0;
	while (base < 10)
	{
		putchar(base);
		base++;
	}
	return (0);
}
