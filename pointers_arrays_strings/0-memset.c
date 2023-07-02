#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @n: first n bytes of the memory area to fills it
 * @b: constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
