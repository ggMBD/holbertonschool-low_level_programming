#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: bytes of src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *destStart = dest;

	while (*src && n > 0)

	{
		*dest++ = *src++;

		n--;
	}

	while (n > 0)

	{
		*dest++ = '\0';

		n--;
	}
	return (destStart);
}
