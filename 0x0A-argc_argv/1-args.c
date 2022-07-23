#include <stdio.h>
/**
 * main - function that prints the number of arguments passed into it.
 * @argc: argument
 * @argv: vector argument
 * Return: success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
