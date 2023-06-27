#include "main.h"
/**
 * _puts - print a string
 * @str: sting
 *
 */
void _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		len++;
	}
	_putchar('\n');
}
