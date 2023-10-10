#include "dog.h"
/**
 *init_dog - function for dog
 *@d: new dog
 *@name: of dog
 *@age: of dog
 *@owner: dog owner
 *
 *Description: new dogs drtails
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
