#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: is the index
 * @n: nember
 * Return: sucsess 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp = ~(1 << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= tmp;

	return (1);
}
