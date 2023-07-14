#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: nember of elements
 * @size: size of elements
 * Return: address of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = (void *) malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i += size)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
