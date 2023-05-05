#include "main.h"

/**
 *
 * print_binary - Function prints binary rep of a number
 * @n: the binary number to print
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /* Recursively go through the function */
	}
	_putchar((n & 1) + '0');
}

