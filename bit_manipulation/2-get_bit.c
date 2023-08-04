#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: is the index
 * @n: nember
 * Return: the value of a bit at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
