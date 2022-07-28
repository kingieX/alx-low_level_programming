#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: newly created array.
 */
int *array_range(int min, int max)
{
	int index, cal;
	int *arr;

	if (min > max)
		return (NULL);

	cal = max - min + 1;
	arr = malloc(sizeof(int) * cal);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < cal; index++, min++)
	{
		arr[index] = min;
	}
	return (arr);
}
