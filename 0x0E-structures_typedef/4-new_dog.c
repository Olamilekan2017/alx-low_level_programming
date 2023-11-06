#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This function creates a new dog
 * @name: The first parameter of the function
 * @age: The second parameter of the function
 * @owner: The third parameter of the function
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a1, b1, c;
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (a1 = 0; name[a1] != '\0'; a1++)
		;
	a1++;
	p->name = malloc(sizeof(char) * a1);
	if (p->name == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (c = 0; c < a1; c++)
		p->name[c] = name[c];
	p->age = age;
	for (b1 = 0; owner[b1] != '\0'; b1++)
		;
	b1++;
	p->owner = malloc(sizeof(char) * b1);
	if (p->owner == NULL)
	{
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (c = 0; c < b1; c++)
		p->owner[c] = owner[c];
	return (p);
}
