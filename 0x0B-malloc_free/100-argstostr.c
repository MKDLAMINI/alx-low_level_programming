#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - This function concatenates all arg of program
 * @ac: This displays the amount of arg
 * @av: Array of strings
 *
 * Return: returns ptr when successful, otherwise return NULL
 */
char *argstostr(int ac, char **av)
{
	int uu = 0;
	int oo = 0;
	int xx = 0;
	int yy = 0;

	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (uu = 0; uu < ac; uu++)
	{
		for (oo = 0; av[uu][oo]; oo++)
			yy++;

	}
	yy += ac;

	string = malloc(sizeof(char) * yy + 1);

	if (string == NULL)
		return (NULL);

	for (uu = 0; uu < ac; uu++)
	{
		string[xx] = av[uu][oo];

		xx++;

	}
	if (string[xx] == '\0')
	{
		string[xx++] = '\n';
	}
	return (string);
}
