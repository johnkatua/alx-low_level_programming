#include <holberton.h>

/**
 * read_textfile - It reads a text file and prints it POSIX standard output
 * @filename: text file to be read
 * @letters: number of letters in the text it should read and print
 * Return: returns actual number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_wr, fd_rd;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fd_rd = read(fd, buf, letters);
	if (fd_rd == -1)
		return (0);
	fd_wr = write(STDOUT_FILENO, buf, fd_rd);
	if (fd_wr == -1)
		return (0);
	free(buf);
	close(fd);
	return (fd_wr);
}
