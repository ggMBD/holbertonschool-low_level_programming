#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to half it
 */
void puts_half(char *str)
{
	char *p = str;
	int len;
	int half = 0;
	int index;
	
	while (*p != '\0')
	{
		len++;
		p++;
	}
	        if ((len % 2) == 0)
                half = len / 2;
        else
                half = (len - 1) / 2;
	for (index = half; index < len; index++)
        {
                _putchar(str[index]);
        }

}