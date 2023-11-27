#include "main.h"
/**
 * create_file - function creates a file
 * @filename: file to be made
 * @text_content: NULL terminated string to write to a file
 * Return: when successful return 1, otherwise return - 1
 */
int create_file(const char *filename, char *text_content)
{
	int tar, jar, far;

	if (!filename)
		return (-1);

	tar = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (tar == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (jar = 0; text_content[jar]; jar++)
		;

	far = write(tar, text_content, jar);

	if (far == -1)
		return (-1);

	close(tar);

	return (1);
}
