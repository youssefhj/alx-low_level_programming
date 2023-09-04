#include "main.h"

/**
 * _strlen - string length
 * @str: string
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	if (str == NULL)
		return (0);

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file - create file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 success -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
