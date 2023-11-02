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
	unsigned int i, j, alpha;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
		j = n;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (alpha = 0; alpha < i; alpha++)
		s[alpha] = s1[alpha];
	for (alpha = 0; alpha < j; alpha++)
		s[alpha + i] = s2[alpha];
	s[i + j] = '\0';
	return (s);
}
