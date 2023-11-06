#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - This function will print the length of string
 * @s: This is the output string
 *
 * Return: This will return the length of the string
 */
int _strlen(char *s)
{
	int z;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}

/**
 * _strcpy - This function will copy a string
 * @dest: ptr that points to string being copied
 * @src: This is the string that will be copied
 *
 * Return: This will return a ptr
 */
char *_strcpy(char *dest, char *src)
{
	int distance;

	int z;

	distance = 0;

	while (src[distance] != '\0')
	{
		distance++;
	}
	for (z = 0; z < distance; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = '\0';

	return (dest);
}
/**
 * new_dog - This function will create a new dog
 * @name: Output name of new dog
 * @age: Output age of new dog
 * @owner: Output name of the owner of the dog
 *
 * Return: This will return pointer to the new dog, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int distance_1;
	int distance_2;

	distance_1 = strlen(name);
	distance_2 = strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (distance_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);

	}
	dog->owner = malloc(sizeof(char) * (distance_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
