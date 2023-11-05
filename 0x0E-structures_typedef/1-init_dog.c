#include <stdio.h>
#include "dog.h"
/**
 *init_dog - a function that creates a dog structure
 *@d: dog struct
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog;
	dog = &d;
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
