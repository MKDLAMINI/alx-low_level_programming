#include "main.h"
/**
 * _strstr - This is the main function of the code
 * @haystack: input character value
 * @needle: input additional character value
 * Return: This will return 0 upon successful compilation
 */
char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)

	{
		char *w = haystack;

		char *u = needle;

		while (*w == *u && *u != '\0')

		{
			w++;

			u++;

		}

		if (*u == '\0')

			return (haystack);
	}

	return (0);

}
