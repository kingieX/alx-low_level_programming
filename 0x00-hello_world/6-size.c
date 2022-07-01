#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0(success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(d));
	printf("size of a int: %lu byte(s)\n", sizeof(a));
	printf("size of a long int: %lu byte(s)\n", sizeof(b));
	printf("size of long long int: %lu byte(s)\n", sizeof(c));
	printf("size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
