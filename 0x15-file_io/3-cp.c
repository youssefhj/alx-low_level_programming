#include "main.h"

#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"

/**
 * main - Entry point to cp utility
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 1 on success 0 on failure
 */
int main(int argc, char *argv[])
{
	int f_fd = 0, t_fd = 0;
	ssize_t b;
	char buf[READ_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_fd = open(argv[1], O_RDONLY);
	if (f_fd == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	t_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (t_fd == -1)
		dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), exit(99);
	while ((b = read(f_fd, buf, READ_SIZE)) > 0)
		if (write(t_fd, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	f_fd = close(f_fd);
	t_fd = close(t_fd);
	if (f_fd)
		dprintf(STDERR_FILENO, ERR_CLOSE, f_fd), exit(100);
	if (t_fd)
		dprintf(STDERR_FILENO, ERR_CLOSE, t_fd), exit(100);
	return (EXIT_SUCCESS);
}
