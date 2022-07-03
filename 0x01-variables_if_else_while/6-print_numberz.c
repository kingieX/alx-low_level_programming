#include <stdio.h>

/**
 * main - Entry point
 * Description - printing all single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 10;
	while (i >= 0)
	{
		putchar(i);
		i--;
	}
	return (0);
}
