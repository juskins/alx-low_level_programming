#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - This function creates a file
 * @filename: File name to be created
 * @text_content: Null terminated string
 * Return: Returns 1 if successful else -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, length);
	if (i == -1, || j == -1)
		return (-1);
	close(i);
	return (1);
}
