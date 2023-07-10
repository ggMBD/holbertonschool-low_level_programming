#include <stdio.h>
#include "main.h"
int square_root_helper(int n, int start, int end);
/**
 * _sqrt_recursion - find natural square root
 *
 * @n: integer
 *
 * Return: sqrt_reursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root_helper(n, 0, n));
}

/**
 * square_root_helper - helper function to find the square root.
 * @n: the number input.
 * @start: the starting point of search.
 * @end: the ending point of search.
 *
 * Return: the natural square root of @n, or -1.
 */
int square_root_helper(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);
		if (mid * mid < n)
			return (square_root_helper(n, mid + 1, end));

					return (square_root_helper(n, start, mid - 1));
	}
	return (-1);
}

