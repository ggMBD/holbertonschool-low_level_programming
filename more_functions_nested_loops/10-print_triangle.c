#include "main.h"
/**
 * print_triangle - prints a triangle with #
 * raw : the hight of triangle
 * colum: the base of the tiangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int raw, colum;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (raw = 1; raw <= size; raw++)
		{
			for (colum = 1; colum <= size; colum++)

			{
				if ((raw + colum) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

