#include "main.h"
/**
 * _strcmp - this function will compare the values of the sttring
 * @s1: value to be entered
 * @s2: Additionally value to be entered
 *
 * Return: returns both s1 and s2
 */
int _strcmp(char *s1, char *s2)

{
	int h = 0;

	while (s1[h] != '\0' && s2[h] != '\0')

	{
		if (s1[h] != s2[h])

		{
			return (s1[h] - s2[h]);

		}

			h++;
	}

	return (0);

}
