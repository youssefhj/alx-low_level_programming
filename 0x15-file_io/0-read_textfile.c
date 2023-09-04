#include "main.h"

/**
 * read_textfile - read text from file and print to stdout
 * @filename: file name
 * @letters: number of letters to read
 *
 * Return: number of printed caracters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *)malloc(letters);
	buf[letters] = '\0';

	len = read(fd, buf, letters);
	buf[len] = '\0';

	if (write(0, buf, len) != len)
		return (0);

	free(buf);
	return (len);
}
