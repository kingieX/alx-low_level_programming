#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - All entries goes here
 *
 * Return: Gives 0
 */
int main(void)
{
	int n;
	int a;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (a > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, a);
	else if (a == 0)
		printf("%s %d is %d and is 0\n", str, n, a);
	else if (a < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, a);

	return (0);
}
