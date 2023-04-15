#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Thsis function reads a file and prints to stdout
 * @letters: The number of letters to be read and printed
 * @filename: File name to read
 * Return: Returns no of letters to read or print else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t i, j;
	char *buffer;

	if (filename == NULL)
		return (0);
	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(filed);
		return (0);
	}
	i = read(filed, buffer, letters);
	close(filed);
	if (i == -1)
	{
		free(buffer);
		return (0);
	}
	j = write(STDOUT_FILENO, buffer, i);
	free(buffer);
	if (i != j)
		return (0);
	return (j);
}
