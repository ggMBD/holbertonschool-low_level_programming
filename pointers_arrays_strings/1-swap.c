#include "main.h"
/**
 * swap_int - swap between a and b
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
