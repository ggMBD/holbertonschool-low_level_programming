#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print it
 * Return void
*/
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int leading_zero = 1, i;
	unsigned long int bit;

	for (i = num_bits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;

		if (bit == 1 || !leading_zero)
		{
			putchar(bit + '0');
			leading_zero = 0;
		}
	}

	if (leading_zero)
	{
		printf("0");
	}
}
