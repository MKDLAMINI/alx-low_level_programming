#include "main.h"
#include <stdlib.h>
/**
 * create_array - This function generates array of characters
 * @size: This value will output the size of an array
 * @c: This value represents the character to print
 *
 * Return: This will return the pointer if successful, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int v;

	char *string;

	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)

		return (NULL);

	for (v = 0; v < size; v++)

		string[v] = c;

	return (string);

}
