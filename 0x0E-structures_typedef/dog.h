#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure for dogs
 *@name: name of the dog
 *@owner:owner of the dog
 *@age: age of the dog
 *
 *Description: this structure crate details of each dog in the hospital
 */

/**
 * dog_t - typedef struct dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
