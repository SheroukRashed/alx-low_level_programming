#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a variable of type struct dog
 * @d: pointer to struct dog to initialize
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "\0";
	if (d->owner == NULL)
		d->owner = "\0";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
