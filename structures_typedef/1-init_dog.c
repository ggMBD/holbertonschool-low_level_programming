#include "dog.h"
/**
 * init_dog - hh
 * @d: ptr
 * @name: dog namee
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
