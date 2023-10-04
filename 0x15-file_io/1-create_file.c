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

	for (len = 0 ; str[len] != '\0'; len++)
		;

	return (len);
}
/**
 * create_file - create file with text content
 * @filename: file name
 * @text_content: text
 *
 * Return: 1 success -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (!filename)
		return (-1);

	fd = open(fd, O_CREAT | O_RDONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	len = write(fd, text_content, _strlen(text_content));
	if (len == -1)
		return (-1);

	close(fd);
	return (1);
}
