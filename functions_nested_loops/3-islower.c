#include "main.h"

/**
 * _islower - check if c is lower case
 * @c: to check
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
