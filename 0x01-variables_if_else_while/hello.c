#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * Return: returns zero
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	return (0);
}
