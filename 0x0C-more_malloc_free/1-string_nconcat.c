#include "main.h"

/**
 * string_nconcat - This function concatenates two strings
 * @s1: This represents the string value to concat
 * @s2: This represents the additional value to concat
 * @n: This value represents the unsigned integer
 *
 * Return: returns ptr if successfull, upon failure return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int g, a, d;
	char *s;

	if (s1 == NULL)
		g = 0;
	else
	{
		for (g = 0; s1[g] != '\0'; ++g)
			;
	}
	if (s2 == NULL)
		a = 0;
	else
	{
		for (a = 0; s2[a] != '\0'; ++a)
			;
	}
	if (a > n)
		a = n;

	s = malloc(sizeof(char) * (g + a + 1));
	if (s == NULL)
		return (NULL);
	for (d = 0; d < a; d++)
		s[d] = s1[d];
	for (d = 0; d < a; d++)
		s[d + g] = s2[d];
	s[g + a] = '\0';
	return (s);
}
