#include "main.h"
/**
 * main - Entry point
 * Description - prints _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 8)
	{
		c = s[i];
		putchar(c);
		i++;
	}
	return (0);
}
