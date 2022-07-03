#include <stdio.h>

/**
 * main - Entry point
 * Description - printing all single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = '0';
	while (n < '10')
	{
		printf(n);
		n++;
	}
	return (0);
}
