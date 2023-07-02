#include "main.h"
/**
 * *_strchr - a function that locates a character in a string
 * @s: sting
 * @c: character c to find it in the string
 * Return: s with new location
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}

	return (s);
}
