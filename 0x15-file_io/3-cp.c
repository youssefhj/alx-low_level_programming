#include "main.h"

/**
 * main - Entry point for copy program
 * @ac: number of parameters
 * @av: list of parameters
 *
 * Return: 0 success
 */
int main(int ac, char *av[])
{
	int src_fd, dest_fd, letters;
	char buf[1025];

	if (ac < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(av[1], O_RDONLY);
	dest_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	letters = read(src_fd, buf, 1024);
	if (src_fd == -1 || letters  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (dest_fd == -1 || write(dest_fd, buf, letters) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

	return (0);
}
