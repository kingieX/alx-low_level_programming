#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Alphabet in lowercase
 *
 * Return: 0 at the end
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
	putchar('\n');
	return (0);
}
