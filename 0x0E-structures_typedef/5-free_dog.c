#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function frees dogs
 * @d: The only parameter of the function
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
