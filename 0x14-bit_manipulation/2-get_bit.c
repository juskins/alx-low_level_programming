#include "main.h"
/**
 * get_bit - Function returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get
 * @n: the bits to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	i = 1 << index;
	j = n & i;
	if (j == 0)
		return (0);
	return (1);
}

