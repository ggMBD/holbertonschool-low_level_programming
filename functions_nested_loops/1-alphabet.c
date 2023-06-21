#include "main.h"
/**
 * print_alphabet - print a..z
 *
 * Return: void
 */


void print_alphabet(void)
{
	char alfa = 'a';

	while (alfa <= 'z')
	{
		_putchar(alfa);
		alfa++;
	}
	_putchar('\n');
}
