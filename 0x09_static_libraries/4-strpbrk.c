#include "main.h"
/**
 * _strpbrk - This is the main function
 * @s: This is the input value to be checked
 * @accept: This is the input value that accepts the character
 * Return: Will return 0 upon successful compilation
 */
char *_strpbrk(char *s, char *accept)

{
	int d;

	while (*s)

	{
		for (d = 0; accept[d]; d++)

		{
			if (*s == accept[d])

				return (s);

		}

		s++;
	}

	return ('\0');

}
