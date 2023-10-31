#include "main.h"
#include <stdlib.h>
/**
 * word_counter - function counts number of words in a string
 * @p: The character to be evaluated
 *
 * Return: This will return the amount of words
 */
int word_counter(char *p)
{
	int signal, v, hh;

	signal = 0;

	hh = 0;

	for (v = 0; p[v] != '\0'; v++)
	{
		if (p[v] == ' ')
			signal = 0;
		else if (signal == 0)
		{
			signal = 1;
			hh++;
		}
	}
	return (hh);
}
/**
 * strtow - This function splits a string into words
 * @str: This is the string that will split
 *
 * Return: This will return ptr to an array of strings
 */
char **strtow(char *str)
{
	char **magician;
	char *trx;

	int b, q = 0, distance = 0, text, j = 0, initiate, stop;

	while (*(str + distance))
		distance++;
	text = word_counter(str);
	if (text == 0)
		return (NULL);
	magician = (char **) malloc(sizeof(char *) * (text + 1));
	if (magician == NULL)
		return (NULL);
	for (b = 0; b < distance; b++)
	{
		if (str[b] == ' ' || str[b] == '\0')
		{
			if (j)
			{
				stop = b;
			trx = (char *) malloc(sizeof(char) * (j + 1));
			if (trx == NULL)
				return (NULL);
			while (initiate < stop)
				*trx = '\0';
			magician[q] = trx - j;
			q++;
			j = 0;
			}
		}
		else if (j++ == 0)
			initiate = b;
	}
	magician[q] = NULL;
	return (magician);
}

