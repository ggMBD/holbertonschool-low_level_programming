#include "main.h"

/**
 * _isdigit - check if c is lower case
 * @c: to check
 * Return: 1 if c is digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
