/**
 * main - program that prints the number of arguments passed into it
 *	followed by a new line
 * @argc: an integer that indicates how many arguments entred
 * @argv: a vector of C strings
 * Return: allways(0)
 */
#include <stdio.h>
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
