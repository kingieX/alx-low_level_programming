#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints something before main function is executed
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
