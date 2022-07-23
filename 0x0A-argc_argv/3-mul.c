#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
