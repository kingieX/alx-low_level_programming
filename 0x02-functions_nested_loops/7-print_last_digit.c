#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: integer
 * Return: value of last the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
		last_digit =  n % 10;
	else
		last_night = (n % 10) + -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
