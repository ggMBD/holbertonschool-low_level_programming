#include "main.h"
/**
 * puts2 - print a string
 * @str: sting
 *
 */
void puts2(char *str)
{
	int counter;
	while (*str != '\0')
	{
		if ((counter % 2) == 0)
			_putchar(*str);
		str++;
		counter++;
	}
	_putchar('\n');
}
