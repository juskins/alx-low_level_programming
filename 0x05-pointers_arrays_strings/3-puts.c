#include "main.h"
/**
 * _puts - prints string
 * @str: the string variable
 * return - string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
