#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @src:pointer to source of input string to dest
 * @dest: pointer to the destination string
 * @n:bytes to be used from src
 *Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;

while (*dest_ptr != '\0')

{
	dest_ptr++;
}
while (*src != '\0' && n > 0)

{
	*dest_ptr = *src;

	dest_ptr++;
	src++;
	n--;
}
*dest_ptr = '\0';
return (dest);
}
