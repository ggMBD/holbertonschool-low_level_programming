#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: success (new) error NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_copy;
	char *owner_copy;


	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->age = age;

	if (name != NULL)
	{
		name_copy = malloc(strlen(name));
		if (name_copy == NULL)
		{
			free (new);
			return (NULL);
		}

		strcpy(name_copy, name);
		new->name = name_copy;	
	}

	return (new);
	free(new);
}
