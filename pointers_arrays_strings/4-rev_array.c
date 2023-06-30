#include "main.h"
/**
 * reverse_array - reverses the content of an array
 *
 * @a:pointer to an arrray
 * @n: the neumber of element to reverse
 *
 * Retturn: nothing
 */
void reverse_array(int *a, int n)
{
	int temp, e, b;

	e = 0;

	b = n - 1;

	while (e < b)
	{
		temp = a[e];
		a[e] = a[b];
		a[b] = temp;

		e++;

		b--;
	}
}
