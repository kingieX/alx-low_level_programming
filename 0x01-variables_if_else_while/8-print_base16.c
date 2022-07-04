#include <stdio.h>
/**
 * main - Entru point
 * Desciption - print numbers of base 16
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
