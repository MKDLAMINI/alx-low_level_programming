#include "main.h"

int validate_palindrome(char *s, int index, int length);

int _strlen_recursion(char *s);

/**
 * is_palindrome - This function validates if a string is a palindrome.
 * @s: This string is going to be validated
 *
 * Return: Returns 1 if s is a palindrome, returns 0 if it is not a palindrome
 */
int is_palindrome(char *s)

{
	if (*s == 0)

	{
		return (1);

	}

	return (validate_palindrome(s, 0, _strlen_recursion(s)));

}

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: length of this string to be calculated
 *
 * Return: This returns the length of the string
 */
int _strlen_recursion(char *s)

{
	if (*s == '\0')

	{
		return (0);

	}

	return (1 + _strlen_recursion(s + 1));

}
/**
 * validate_palindrome - validates the characters of the palindrome
 * @s: string to be validated
 * @index: This is the iterator
 * @length: This is the length of the string
 *
 * Return: This returns 1 if palindrome, returns 0 if its not
 */
int validate_palindrome(char *s, int index, int length)

{
	if (*(s + index) != *(s + length - 1))

	{
		return (0);

	}

	if (index > length)

	{
		return (1);

	}

	return (validate_palindrome(s, index + 1, length - 1));

}
