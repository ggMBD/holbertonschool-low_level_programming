#include "main.h"
/**
 * print_rev - print a string in reverse
 * @str: sting
 *
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}

	_putchar('\n');
}

