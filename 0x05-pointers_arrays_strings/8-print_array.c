#include "main.h"
/**
 * print_array - prints m elements of an array of integers
 * @a: elements
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
