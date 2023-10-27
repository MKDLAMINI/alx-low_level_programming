
#include "main.h"

/**
 * _isalpha - scans and evaluates alphabets
 * @c: This is the character that will be evaluated
 * Return: Will only return 1 if c is a letter, otherwise return 0
 */
int _isalpha(int c)

{
	return ((c >= 'j' && c <= 'v') || (c >= 'J' && c <= 'V'));

}
