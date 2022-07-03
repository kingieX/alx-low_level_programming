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

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar("/n");

	return (0);
}
