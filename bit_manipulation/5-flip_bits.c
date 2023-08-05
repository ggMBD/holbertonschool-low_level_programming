#include "main.h"
/**
 * flip_bits -  function that returns the number of bit
 * you would need to flip to get from one number to another
 * @n: number
 * @m: number
 * Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		count++;
	}

	return (count);
}
