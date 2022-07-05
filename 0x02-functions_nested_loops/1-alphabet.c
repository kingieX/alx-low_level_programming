#include "main.h"
/**
 * main - prints the alphabet in lowercase, followed by new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
