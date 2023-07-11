#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: to initializes the array with it
 * Return: error(NULL) success(ptr)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	ptr[size] = '\0';
	return (ptr);
}
