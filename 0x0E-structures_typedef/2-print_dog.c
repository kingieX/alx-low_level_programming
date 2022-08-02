#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to the struct
 * Return: success or nil
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			print("Owner: %s\n", d->owner);
		else
			print("Owner: (nil)\n");
	}
}
