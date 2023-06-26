#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
		_putchar('\n');
	while (size > i)
	{
		j = 0;
		while (size > j)
		{
			_putchar('#');
			j++;
		}
	_putchar('\n');
	i++;
	}
}
