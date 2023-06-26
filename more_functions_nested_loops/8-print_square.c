#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int size2 = size;
	while (size > 0)
	{
		while (size2 > 0)
		{
			_putchar('#' + '0');
			size2--;
		}
	_putchar('\n');
	size--;
	}
}
