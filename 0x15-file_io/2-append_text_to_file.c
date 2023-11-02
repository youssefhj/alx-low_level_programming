#include "main.h"

/**
 * _strlen - string length
 * @str: string
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	int len;

	if (str == NULL)
		return (0);

	for (len = 0 ; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - append text to filename
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 success -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (len)
		b = write(fd, text_content, len);

	close(fd);
	return (b == len ? 1 : -1);
}
