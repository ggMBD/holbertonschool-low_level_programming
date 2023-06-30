#include "main.h"
/**
 * *_strcat - add src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *rt;

	while (*rt != '\0')
	{
		rt++;
	}
	while(*src != '\0')
	{
		*rt = *src;
		rt ++;
		src++;
	}
	*rt = '\0';

	return (dest);
}
