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


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *)malloc(letters + 1);

	if ((letters = read(fd, buf, letters)) == -1)
		return (0);

	if (write(1, buf, letters) == -1)
		return (0);

	free(buf);
	close(fd);

	return (lenw);
}
