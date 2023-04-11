#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Function checks for the endianness.
 * Return: Returns 0 if big-endian, Else returns 1 if little-median
 */

int get_endianness(void)
{
	char *y;
	int x = 1;

	y = (char *)&x;

	return (*y);
}
