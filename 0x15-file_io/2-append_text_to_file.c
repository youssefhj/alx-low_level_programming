#include "main.h"

/**
 * _strlen - string length
 * @str: string
 *
 * Return: lengthg of str
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
 * append_text_to_file - append text to the end of the file
 * @filename: file name
 * @text_content: texte content
 *
 * Return: 1 success -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
