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
	void *mem;
	char *b;
	unsigned int i;

	if (nmemb == 0 || size size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);
	b = mem;

	for (i = 0; i < (nmemb * size); i++)
		b[i] = '\0';

	return (mem);
}
