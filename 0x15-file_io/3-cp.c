#include "main.h"

/**
 * main - Entry point of cp program
 * @argc : number of arguments
 * @argv: list of argument
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int fdr, fdw;
	char buf[1024];
	ssize_t len;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdr = open(argv[1], O_RDONLY);
	fdw = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	while ((len = read(fdr, buf, 1024)) != 0)
	{
		if (len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		len = write(fdw, buf, len);
		if (len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fdr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	if (close(fdw) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}

	return (0);
}
