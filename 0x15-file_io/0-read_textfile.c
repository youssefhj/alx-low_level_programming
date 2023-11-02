#include "main.h"

/**
 * read_textfile - read file and printed to standout
 * @filename: file name
 * @letters: number of letters that should read
 *
 * Return: the number of read caracter or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b;
	char buf[READ_SIZE * 8];

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	b = read(fd, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);

	close(fd);
	return (b);
}
