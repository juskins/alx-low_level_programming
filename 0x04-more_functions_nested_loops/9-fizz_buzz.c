#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * The “Fizz-Buzz test” is an interview question designed
 * to help filter out the 99.5% of programming job candidates who can’t seem
 * to program their way out of a wet paper bag
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
