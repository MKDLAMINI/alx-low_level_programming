#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * _strdup - This function copies a pointer to a new memory space
 * @str: This value represents the character of strings
 *
 * Return: returns pointer if successful, otherwise NULL
 */
char *_strdup(char *str)
{
	int T = 0;

	int Y = 0;

	char *heaven;

	if (str == NULL)

		return (NULL);
	T = 0;

	while (str[T] != '\0')

		T++;

	heaven = malloc(sizeof(char) * (T + 1));

	if (heaven == NULL)

		return (NULL);

	for (Y = 0; str[Y]; Y++)

		heaven[Y] = str[Y];

	return (heaven);

}
