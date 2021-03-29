#include "holberton.h"

/**
 * _strlength - It checks the length of a string
 * @str: pointer to the string to check length
 * Return: returns the length of the string
 */

int _strlength(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - It appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the of the file
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_wr;

	if (text_content == NULL)
	{
		return (1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	fd_wr = write(fd, text_content, _strlength(text_content));

	if (fd_wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
