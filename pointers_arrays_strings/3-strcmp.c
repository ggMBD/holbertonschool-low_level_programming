#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: pointer to the first string to compare
 * @s2: pointer to te second string to compare
 *
 * Return: o or (-1) or 1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, n;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];

			break;
		}
		else
		{
			n = s1[i] - s2[i];
		}
		i++;
	}
	return (n);

}
