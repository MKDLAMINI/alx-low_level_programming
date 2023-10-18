#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: The destination string where the concatenated result is stored
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the destination string dest
 */
char *_strcat(char *dest, char *src)

{
	int i = 0;

	int j = 0;


	while (dest[i] != '\0')

	{
		i++;

	}

	while (src[i] != '\0')

	{
		dest[i] = src[i];

		i++;

		j++;

	}

	dest[i] = '\0';

	return (dest);

}
