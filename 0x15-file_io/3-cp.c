#include "main.h"
/**
 * eval_file - evaluates if file can open
 * @file_from: initial file
 * @file_to: file to transfer
 * @argv: argument to pass
 */
void eval_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - entr point of function
 * @argv: arguemnts to pass
 * @argc: the number of arguments
 * Return: returns 0 when successful
 */
int main(int argc, char *argv[])
{
	char the_buffer[1024];
	int file_from, file_to, file_error;
	ssize_t value_char, tar;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	eval_file(file_from, file_to, argv);

	value_char = 1024;
	while (value_char == 1024)
	{
		value_char = read(file_from, the_buffer, 1024);
		if (value_char == -1)
			eval_file(-1, 0, argv);
		tar = write(file_to, the_buffer, value_char);
		if (tar == -1)
			eval_file(0, -1, argv);
	}
	file_error = close(file_from);
	if (file_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	file_error = close(file_to);
	if (file_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
