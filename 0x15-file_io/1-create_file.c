#include "holberton.h"

/**
 * _strlength - Finds the length of a string
 * @str: pointer to the string to find the length
 * Return: returns the length of a string
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
 * create_file - It creates a new file
 * @filename: the name of the file to create
 * @text_context: NULL terminated string to write to the file
 * Return: returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_context)
{
	int fd, fd_wr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_context == NULL)
	{
		return (-1);
	}
	fd_wr = write(fd, text_context, _strlength(text_context));
	close(fd);
	if (fd_wr == -1)
	{
		return (-1);
	}
	return (1);
}
