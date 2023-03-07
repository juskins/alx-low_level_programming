#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function reurns ponter to dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: size of bytes to be copied
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
