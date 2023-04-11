#include <stdio.h>
#include "main.h"
/**
 * print_binary - Function that prints binary of a number
 * @n: number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}