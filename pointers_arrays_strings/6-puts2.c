#include "main.h"
/**
 * puts2 - print a string
 * @str: sting
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
