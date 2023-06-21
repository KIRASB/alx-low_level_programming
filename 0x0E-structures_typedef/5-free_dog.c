#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - it free the memory that restored by the other functions
 * @d: the pointer to the structur
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
