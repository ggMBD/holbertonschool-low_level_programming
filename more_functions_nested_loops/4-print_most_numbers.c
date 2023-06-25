#include "main.h"
/**
 * print_most_numbers - print from 0 to 9 without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 4 && i != 2)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
