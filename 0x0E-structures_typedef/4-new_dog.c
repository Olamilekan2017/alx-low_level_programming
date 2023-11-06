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
	unsigned int a, b, c;
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (a = 0; name[a] != '\0'; a++)
		;
	a++;
	p->name = malloc(sizeof(char) * a);
	if (p->name == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		p->name[c] = name[c];
	p->age = age;
	for (b = 0; owner[b] != '\0'; b++)
		;
	b++;
	p->owner = malloc(sizeof(char) * b);
	if (p->owner == NULL)
	{
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		p->owner[c] = owner[c];
	return (p);
}
