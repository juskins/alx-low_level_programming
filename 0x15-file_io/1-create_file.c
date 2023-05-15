#include <stdio.h>
#include "main.h"

/**
 * create_file -  a function that creates a file
 * @filename:  the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: returns 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int op, wrt, txtcont_len = 0;

	if (text_content != NULL)
	{
		while (text_content[txtcont_len])
			txtcont_len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	wrt = write(op, text_content, txtcont_len);
	if (op == -1 || wrt == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}


