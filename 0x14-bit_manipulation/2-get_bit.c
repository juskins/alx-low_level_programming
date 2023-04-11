#include <stdio.h>
#include "main.h"
/**
 * get_bit - Function that returns value of a byte at an index
 *@n: Variable of the bits
 *@index: Index variable to search the bits and retrieve value
 *Return: Returns -1 if error exists, Else it returns bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return (1);
}
