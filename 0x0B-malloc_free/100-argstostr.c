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
	int uu, oo, ll = 0, final_length = 0;
	char *combined_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (uu = 0; uu < ac; uu++)
	{
		for (oo = 0; av[uu][oo]; oo++)
			final_length++;

	}
	final_length += ac;

	combined_string = malloc(sizeof(char) * final_length + 1);
	if (combined_string == NULL)
		return (NULL);

	for (uu = 0; uu < ac; uu++)
	{
		for (oo = 0; av[uu][oo]; oo++)
		{
			combined_string[ll] = av[uu][oo];
			ll++;
		}
		if (combined_string[ll] == '\0')
		{
			combined_string[ll++] = '\n';
		}
	}
	return (combined_string);

}
