#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Function sets the value of a bit to 0
 * @n: Avariable pointer to the bit to set
 * @index: The variable index to set the bit value to
 * Return: Returns -1 if error occurs, Else returns 1
 **/

it clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	bit = ~(1 << inde)x;
	*n = *n & bit;

	return (1);
}
