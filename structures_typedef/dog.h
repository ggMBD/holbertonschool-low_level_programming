#ifndef DOGS
#define DOGS
/**
 * struct dog - new type struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif