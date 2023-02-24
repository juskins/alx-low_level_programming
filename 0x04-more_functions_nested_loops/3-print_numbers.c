#include "main.h"

/**
*print_numbers - print 0123456789
* argument - void
* return: void
*/

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
