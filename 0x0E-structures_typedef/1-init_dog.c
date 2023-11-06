#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This function initialize a variable of type strict dog
 * @d: The first parameter of the function
 * @name: The second parameter of the function
 * @age: The third parameter of the function
 * @owner: The fourth parameter of the function
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
