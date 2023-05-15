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
	ssize_t open, read, write;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	open = open(filename, 0_RDONLY);
	read = read(open, buffer, letters);
	write = write(STDOUT_FILENO, buffer, read);
	if (read == -1 || write == -1 || open == -1)
	{
		free(buffer);
		return (0);
	}
	if (write != read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open);

	return (write);
