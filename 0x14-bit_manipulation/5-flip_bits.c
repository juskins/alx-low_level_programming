#inlcude "main.h"
/**
 * flip_bits - a function that returns the number of bits 
 * you would need to flip to get from one number to another.
 * @m: Th number to be flipped
 * @n: Number to flip to
 * Return: returns num of bits to flip to
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j;
	unsigned int count, k;

	i = 1;
	j = n ^ m;
	count = 0;

	for (k = 0; k < (sizeof(unsigned long int) * 8); i++)
	{
		if (i == 
