#include <stdio.h>
/**
 * main - Entry point
 * Fizz for multiples of 3,Buzz for multiples of 5
 * and FizzBuzz for multiples of 15
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)

	{
		if (num % 15 == 0)

			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");

		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%i", num);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

