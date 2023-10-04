#include "main.h"

/**
 * _strlen - string length
 * @str: string
 *
 * Return: length
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	if (str == NULL)
		return (0);

	for (len = 0 ; str[len] != '\0' ; len++)
		;

	return (len);
}

/**
 * append_text_to_file - append text to end of the file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 success -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fd, text_content, _strlen(text_content));
		if (len == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
