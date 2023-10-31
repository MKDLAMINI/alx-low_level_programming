#include "main.h"
#include <stdlib.h>

void use(char **, char *);
void make_word(char **, char *, int, int, int);

/**
 * strtow - function splits string into words
 * @str: string value
 *
 * Return: this will return a pointer to an array
 */
char **strtow(char *str)
{
	int u, flag, length;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	u = flag = length = 0;
	while (str[u])
	{
		if (flag == 0 && str[u] != ' ')
			flag = 1;
		if (u > 0 && str[u] == ' ' && str[u - 1] != ' ')
		{
			flag = 0;
			length++;
		}
		u++;

	}
	length += flag == 1 ? 1 : 0;

	if (length == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (length + 1));

	if (words == NULL)
		return (NULL);

	use(words, str);
	words[length] = NULL;
	return (words);
}

/**
 * use - gets words into an array
 * @words: string array value
 * @str: the string value
 */
void use(char **words, char *str)
{
	int u, k, start, flag;

	u = k = flag = 0;
	while (str[u])
	{
		if (flag == 0 && str[u] != ' ')
		{
			start = u;
			flag = 1;
		}

		if (u > 0 && str[u] == ' ' && str[u - 1] != ' ')
		{
			make_word(words, str, start, u, k);
			k++;
			flag = 0;
		}
		u++;
	}
	if (flag == 1)
		make_word(words, str, start, u, k);
}

/**
 * make_word - makes a word and places it into an array
 * @words: the string of arrays
 * @str: the string value
 * @start: the beginning of the word
 * @end: the end process of the word
 * @index: index of an array
 */
void make_word(char **words, char *str, int start, int end, int index)
{
	int u, k;

	u = end - start;
	words[index] = (char *)malloc(sizeof(char) * (u + 1));

	for (k = 0; start < end; start++, k++)
		words[index][k] = str[start];
	words[index][k] = '\0';
}
