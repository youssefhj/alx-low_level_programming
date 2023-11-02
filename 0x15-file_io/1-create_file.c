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
 * create_file - create file named filename with text_content
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		b = write(fd, text_content, len);

	close(fd);
	return (b == len ? 1 : -1);
}
