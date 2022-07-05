#include "main.h"
/**
 * main - prints the alphabet in lowercase, followed by new line.
 */
void print_alphabet(void)
{
	char letters;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
