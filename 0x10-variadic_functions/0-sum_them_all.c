#include <stdarg.h>
#include "variadic_function.h"
/**
 * sum_them_all - function that returns the sum of all its parameter.
 * @n: integer
 * @...: variable number
 * Return: success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
