#include "main.h"
/**
 * swap_int - swap between a and b
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *b - *a;
}
