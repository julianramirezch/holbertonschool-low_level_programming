#include "dog.h"

/**
 * print_dog- function that prints a struct dog.
 * @d: Structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
