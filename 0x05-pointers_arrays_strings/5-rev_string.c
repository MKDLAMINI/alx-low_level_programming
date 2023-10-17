#include "main.h"
<<<<<<< HEAD

/**
 * rev_string -Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
=======
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)

>>>>>>> edc2ded04026d5382b600f718f27a293d137631e
{
	char rev = s[0];

	int length = 0;

	int i;

	while (s[length] != '\0')

	length++;

<<<<<<< HEAD
	for (i = 0; i < length / 2; i++)
=======
	for (i = 0; i < length; i++)
>>>>>>> edc2ded04026d5382b600f718f27a293d137631e

	{
		length--;

		rev = s[i];

		s[i] = s[length];

		s[length] = rev;

	}
<<<<<<< HEAD
=======

>>>>>>> edc2ded04026d5382b600f718f27a293d137631e
}
