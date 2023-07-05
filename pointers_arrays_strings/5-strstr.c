#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the first occurence of the substring
 * Return: a pointer to the beginning of substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

		while (*haystack != '\0')
		{
			char *h = haystack;

			char *n = needle;

			while (*n != '\0' && *h == *n)
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (haystack);
			}

			haystack++;
		}
		return ('\0');
}
