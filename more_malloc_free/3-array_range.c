#include <stdlib.h>
/**
 */
int *array_range(int min, int max)
{
	int i, def, *array;

	if (min > max)
		return (NULL);

	def = (max - min) + 1;

	array = malloc(sizeof(int) * def);

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
