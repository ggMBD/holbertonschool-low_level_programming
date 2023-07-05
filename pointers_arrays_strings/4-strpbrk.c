#include "main.h"
/**
 * _strpbrk - a function that searches a string
 *	for any of a set of bytes
 * @s:pointer to string.
 * @accept: pointer to string we are searching for.
 * Return: pointer to the bytes in @s
 *	or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
