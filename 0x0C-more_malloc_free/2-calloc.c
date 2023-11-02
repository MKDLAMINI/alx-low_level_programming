#include "main.h"

/**
 * _calloc - This function allocates memory for an array
 * @nmemb: This value distributes memory for an array
 * @size: This value distributes an element of size in bytes
 *
 * Return: Returns a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *v;
	unsigned int w;

	if (nmemb == 0 || size == 0)
		return (NULL);
	v = malloc(nmemb * size);
	if (v == NULL)
		return (NULL);
	for (w = 0; w < (nmemb * size); w++)
		v[w] = 0;
	return (v);
}
