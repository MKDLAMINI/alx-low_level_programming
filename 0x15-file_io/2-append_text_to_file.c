#include "main.h"
/**
 * append_text_to_file - function attaches text to end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: when successful returns 1 otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tar, jar, far;

	if (!filename)
		return (-1);

	tar = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		for (jar = 0; text_content[jar]; jar++)
			;

		far = write(tar, text_content, jar);

		if (far == -1)
			return (-1);
	}

	close(tar);

	return (1);
}
