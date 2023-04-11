#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - This function converts a binary digit to unsigned int
 * @b: A pointer to a string of only 0's and 1's
 * Return: Returns 0 if b is NULL or doesnt contain 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int digit;
	int length;

	digit = 0;
	if (!b)
	{
		return (0);
	}
	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
	}
	for (length = 0; b[length] != '\0'; length++)
	{
		digit <<= 1;
		if (b[length] == '1')
			digit += 1;
	}
	return (digit);
}
