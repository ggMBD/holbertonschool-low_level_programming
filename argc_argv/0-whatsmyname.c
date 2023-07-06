/**
 * main - program that prints its name, followed by a new line
 * @argc: an integer that indicates how many arguments entred
 * @argv: a vector of C strings
 * Return: allways(0)
 */
#include <stdio.h>
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
