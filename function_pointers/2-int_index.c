#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: error -1 success 0
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
		else
			return (-1);
	}
	return (0);
}
