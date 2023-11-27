#include "main.h"
/**
 * read_textfile - function reads txt file and prints it to stdout
 * @filename: ptr to function
 * @letters: value of number printed
 * Return: returns actual number of letters to rad and print, if not return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *the_buffer;
	int tar;
	ssize_t bar;
	ssize_t jar;

	if (!filename)
		return (0);

	tar = open(filename, O_RDONLY);

	if (tar == -1)
		return (0);

	the_buffer = malloc(sizeof(char) * (letters));
	if (!the_buffer)
		return (0);

	bar = read(tar, the_buffer, letters);
	jar = write(STDOUT_FILENO, the_buffer, bar);

	close(tar);

	free(the_buffer);

	return (jar);
}
