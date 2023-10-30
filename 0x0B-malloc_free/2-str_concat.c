#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - This function will concatenate two strings
 * @s1: This value represents the string that will be concatenated
 * @s2: This value represents the additional string to be concatenated
 *
 * Return: if returns both strings concatenated, otherwise returns NULL
 */
char *str_concat(char *s1, char *s2)
{
	int Q;

	int P;
	char *Halloween;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	Q = P = 0;

	while (s1[Q] != '\0')
		Q++;

	while (s2[P] != '\0')
		P++;

	Halloween = malloc(sizeof(char) * (Q + P + 1));
	if (Halloween == NULL)
		return (NULL);
	Q = P = 0;

	while (s1[Q] != '\0')
	{
		Halloween[Q] = s1[Q];
		Q++;
	}
	while (s2[P] != '\0')
	{
		Halloween[Q] = s2[P];
		Q++;
		P++;
	}
	Halloween[Q] = '\0';
	return (Halloween);
}
