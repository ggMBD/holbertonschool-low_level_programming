#include "main.h"

void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int leading_zero = 1;
	unsigned long int bit;

	for (int i = num_bits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;

		if (bit == 1 || !leading_zero)
		{
			printf("%lu", bit);
			leading_zero = 0;
		}
	}

	if (leading_zero)
	{
		printf("0");
	}
}
