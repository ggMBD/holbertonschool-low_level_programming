#include "main.h"
/**
 * _strlen - length of string
 * @s: sting
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
