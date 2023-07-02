#include "main.h"
/**
 * *_memcpy - a function that copies memory area
 * @src: pointer to source
 * @n: first n bytes of the memory area to fills it
 * @dest: pointer to dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
