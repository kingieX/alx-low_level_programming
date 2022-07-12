#include "main.h"
/**
 *_strlen - get the length of a string
 *@s: string pointer to pass to this function
 */
int _strlen(char *s)
{
	size_t length = 0;
	
	while (*s++)
		length++;

	return(length);
}
