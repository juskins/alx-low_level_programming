#include "main.h"

/**
 * str_len - Function that gets length of string
 * @str: A pointer to string
 * Return: Returns the length of string
 */

size_t str_len(char *str)
{

	size_t i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @text_content:  the NULL terminated string to add at the end of the file
 * @filename: the name of the file
 * Return: returns 1 on success and -1 on failure
 * If filename is NULL return -1, Return 1 if the file exists
 * and -1 if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t length;
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		length = write(fp, text_content, str_len(text_content));
	}
	if (fp == -1)
		return (-1);

	close(fp);
	if (length == -1)
	{
		return (-1);
	}
	return (1);
}

