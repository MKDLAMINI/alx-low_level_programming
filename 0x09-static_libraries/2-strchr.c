#include "main.h"
/**
 * _strchr - This is the initialization point
 * @s: value to be entered
 * @c: value to be entered
 * Return: Will return 0 upon succession
 */
char *_strchr(char *s, char c)

{
	int p = 0;

	for (; s[p] >= '\0'; p++)

	{
		if (s[p] == c)

		return (&s[p]);

	}

	return (0);
}
