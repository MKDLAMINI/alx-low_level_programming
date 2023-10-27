#include "main.h"
/**
 * _strspn - Initialization point of the function
 * @s: input value to be entered
 * @accept: input value to be entered
 * Return: This will return 0 upon successful compilation
 */
unsigned int _strspn(char *s, char *accept)

{
	unsigned int l = 0;

	int y;

	while (*s)

	{
		for (y = 0; accept[y]; y++)

		{
			if (*s == accept[y])

			{
				l++;

				break;
			}

			else if (accept[y + 1] == '\0')

				return (l);
		}

		s++;
	}

	return (l);
}
