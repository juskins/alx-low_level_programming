#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Function keeps count of bits to be flipped
 * @m: The variable of number to be flipped to
 * @n: The variable number
 * Return: Returns the no of bits to flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j;
	unsigned int k, l;

	j = 1;
	i = n ^ m;
	k = 0;

	for (l = 0; l < (sizeof(unsigned long int) * 8); l++)
	{
		if (j == (i & j))
		{
			k++;
		}
		j <<= 1;
	}
	return (k);
}
