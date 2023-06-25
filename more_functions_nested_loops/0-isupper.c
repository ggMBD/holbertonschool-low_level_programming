#include "main.h"

/**
 * _isupper - check if c is lower case
 * @c: to check
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

