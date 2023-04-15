#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * strlen - Function that return string length
 * @string: AA pointer to string
 * Return: Returns the length of string
 */

size_t strlen(char *string)
{
	size_t i = 0;

	while (string[i])
		i++;
	return (i);
}

/**
 * append_text_to_file - Appends text to the end of a file
 * @text_content: The string to be added to the end of a file
 * @filename: A pointer to the name of the file
 * Return: Returns -1 if filename is NULL else 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed;
	ssize_t length;

	if (filename == NULL)
	{
		return (-1);
	}
	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed == -1)
		return (-1);
	if (text_content != NULL)
		length = write(filed, text_content, strlen(text_content));
	close(filed);
	if (length == -1)
		return (-1);
	return (1);
}
