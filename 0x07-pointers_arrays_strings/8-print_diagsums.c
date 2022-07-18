#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diaginals.
 * @a: integer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int x, y, z, c = 0, r = 0;

	for (x = 0; x < size; x++)
	{
		z = (x * size) + x;
		c += *(a + z);
	}
	for (y = 0; y < size; y++)
	{
		z = (y * size) + (size - 1 - y);
		r += *(a + z);
	}
	printf("%i, %i\n", c, r);
}
