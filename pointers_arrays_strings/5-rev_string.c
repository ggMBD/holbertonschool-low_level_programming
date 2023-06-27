#include "main.h"
/**
 * rev_string - reverse a string
 * @s: sting
 *
 */
void rev_string(char *s)
{
	char *p = s;
	int len = 0;
	int tmp;
	int counter;
	char rev;
	
	while (*p != '\0')
	{
		len++;
		p++;
	}
	len--;
	for(counter = 0; counter < ((len / 2) + 1); counter++)
	{
		tmp = (len - counter);
		rev = s[counter];
		s[counter] = s[tmp];
		s[tmp] = rev;
	}
}

