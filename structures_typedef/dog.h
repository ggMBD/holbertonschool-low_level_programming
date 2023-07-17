#ifndef DOGS
#define DOGS
/**
 * struct dog - new type struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
