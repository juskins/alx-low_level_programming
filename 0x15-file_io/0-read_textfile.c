#include <stdio.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 *  and prints it to the POSIX standard output.
 *  @letters: the number of letters it should read and print
 *  @filename: Tshe file to read from
 *  Return: if the file can not be opened,read or is NULL, return 0
 *  else returns actual letters it can read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t op, rd, wrt;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);
	if (rd == -1 || wrt == -1 || op == -1)
	{
		free(buff);
		return (0);
	}
	if (wrt != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(op);

	return (wrt);
}
