/**
 * main - program that multiplies two numbers
 * @argc: an integer that indicates how many arguments entred
 * @argv: a vector of C strings
 * Return: success(0) error (1)
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a * b;
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
