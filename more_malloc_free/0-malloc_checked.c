#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size for allocates
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
