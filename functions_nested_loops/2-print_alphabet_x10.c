#include "main.h"
/**
 * print_alphabet_x10 - print a..z 10X
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		char alfa = 'a';

		while (alfa <= 'z')
		{
			_putchar(alfa);
			alfa++;
		}
		_putchar('\n');
		count++;
	}
}
