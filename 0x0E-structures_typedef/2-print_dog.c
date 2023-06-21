#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - it print the name and the age and the name of the owner of a dog
 * @d: pointer to the elemmets of the dog struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "nil";
	}
	if (d->owner == NULL)
	{
		d->owner = "nil";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner)
}
