#include "main.h"

/**
 * read_textfile - read text from file and print it
 * @filename: filename
 * @letters: number of letters should print
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t len;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *)malloc(letters + 1);

	len =  read(fd, buf, letters);
	len = write(STDOUT_FILENO, buf, len);

	free(buf);
	close(fd);

	return (len);
}
