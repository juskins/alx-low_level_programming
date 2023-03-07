#include <stdio.h>
#include "main.h"
/**
 * _memset - function that fills memory with constant bytes
 * @s: pointer that moves first n bytes
 * @n: size of bytes of the memory area
 * @b: constant byte to be moved
 * Return: A pointer that returns a char to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (0);
}