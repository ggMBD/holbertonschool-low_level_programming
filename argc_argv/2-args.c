/**
 * main - program that prints all arguments it receives
 * @argc: an integer that indicates how many arguments entred
 * @argv: a vector of C strings
 * Return: allways(0)
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
