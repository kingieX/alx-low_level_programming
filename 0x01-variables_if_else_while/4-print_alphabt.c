#include <stdio.h>

/**
 * main - Entry point
 * Description - print exception
 * Return: Always (success)
 */
int main(void)
{
	char low;

	low = 'a';
	while (low <= 'z')
	{
		if ((low != 'e') && (low != 'q'))
		{
			putchar(low);
			low++;
		}
		else
		{
			low++;
		}
	}
	putchar('\n');
	return (0);
}
