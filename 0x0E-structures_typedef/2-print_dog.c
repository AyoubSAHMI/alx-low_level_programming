#include <stdio.h>
#include "dog.h"
/**
 *print_dog - a function that prints all infos of a dog
 *@d: pointer to a dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	if (d.name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	if (d.age == NULL)
	{
		printf("Name: %s\n",(*d).name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", (*d).owner);
	}
	if (d.owner == NULL)
	{
		printf("Name: %s\n",(*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: (nil)\n");
	}
}
