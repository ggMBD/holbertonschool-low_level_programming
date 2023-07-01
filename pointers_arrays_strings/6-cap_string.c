#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @inp: input string
 * Return: inp
 */
char *cap_string(char *inp)
{
	int counter;

	while (inp[counter] != '\0')
	{
	if(counter == 0)
	{
		if (inp[counter] >= 'a' && inp[counter] <= 'z')
			inp[counter] -= 32 ;
	}
	if (inp[counter - 1] == 32 || inp[counter - 1] == 124 ||
			inp[counter - 1] == 10 ||
			inp[counter - 1] == 44 || inp[counter - 1] == 59 ||
			inp[counter - 1] == 46 || inp[counter - 1] == 9 ||
			inp[counter - 1] == 33 || inp[counter - 1] == 63 ||
			inp[counter - 1] == 34 || inp[counter - 1] == 40 ||
			inp[counter - 1] == 41 || inp[counter - 1] == 123 )
		inp[counter] -= 32;
	counter++;
	}
	return (inp);
}
