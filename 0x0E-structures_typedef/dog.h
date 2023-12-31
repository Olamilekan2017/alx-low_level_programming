#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This define a new type struct dog
 * @name: The first parameter of the function
 * @owner: The second parameter of the function
 * @age: The third parameter of the function
 *
 * Description: This is my first struct project with alx
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
