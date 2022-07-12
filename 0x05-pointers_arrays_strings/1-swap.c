#include "main.h"
/**
 * swap_int - two integer swap the values they are given.
 *@a: peremeter 1
 *@b: peremeter 2
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
