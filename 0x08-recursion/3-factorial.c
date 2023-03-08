#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns factorial of a given number.
 * @n: number to return the factorial
 *
 * Return: the factorial of n if >2
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
