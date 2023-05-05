#include "main.h"
/**
 * binary_to_uint - Function converts binary num to unsigned int.
 * @b: A pointer to string of chars of 0 & 1
 * Return: Returns 0 if b is NULL or doesnt contain 0 or 1
 * else - Returns the unsigned int converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value;
	int length;

	value = 0;
	if (!b)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}
	for (length = 0; b[length] != '\0'; length++)
	{
		value <<= 1;
		if (b[length] == '1')
		{
			value += 1;
		}
	}
	return (value); /*Value as unsigned int */
