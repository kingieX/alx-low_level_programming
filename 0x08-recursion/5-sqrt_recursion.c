#include "main.h"
/**
 * _sqrt_recursion - functions that returns the natural square root of a number
 * @n: integer
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	return (_sqrt_recursion(n));
}
