#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (0);
}
