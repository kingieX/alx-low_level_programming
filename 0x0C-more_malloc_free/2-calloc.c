#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array using malloc.
 * @nmemb: memory
 * @size: size of memory
 * Return: success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size size == 0)
		return (NULL);

	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		b[i] = 0;
			return (b);
}
