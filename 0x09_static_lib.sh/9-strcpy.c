#include "main.h"
/**
* char *_strcpy - Function duplicates from src
* @dest: value from src copied into dest
* @src: value copied from src
* Return: return string value if successfu;
*/
char *_strcpy(char *dest, char *src)

{
	int f;

	int g;

	f = 0;

	g = 0;

	while (*(src + f) != '\0')

	{
		f++;

	}

	for ( ; g < f ; g++)

	{

		dest[g] = src[g];

	}

	dest[f] = '\0';

	return (dest);


}
