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
	unsigned int g, a, s;
	char *string;

	if (s1 == NULL)
	{
		g = 0;
	}
	else
	{
		for (g = 0; s1[g]; ++g)
			;
	}
	if (s2 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s2[a]; ++a)
			;
	}
	if (a > n)
		a = n;

	string = malloc(sizeof(char) * (g + a + 1));
	if (string == NULL)
		return (NULL);
	for (s = 0; s < a; s++)
		string[s] = s1[s];
	for (s = 0; s < a; s++)
		string[s + g] = s2[s];
	string[g + a] = '\0';
	return (string);
}
