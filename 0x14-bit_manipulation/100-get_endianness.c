#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: Returns 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *j = (char *)&i;

	return (*j);
}

