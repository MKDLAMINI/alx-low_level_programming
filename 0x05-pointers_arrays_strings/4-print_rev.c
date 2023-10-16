#include "main.h"
<<<<<<< HEAD

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0 when successful
 */
void print_rev(char *s)
=======
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)

>>>>>>> edc2ded04026d5382b600f718f27a293d137631e
{
	int len = 0;

	int o;

	while (*s != '\0')

	{
		len++;

		s++;
<<<<<<< HEAD
=======

>>>>>>> edc2ded04026d5382b600f718f27a293d137631e
	}

	s--;

	for (o = len; o > 0; o--)
<<<<<<< HEAD
	
	{
		_putchar(*s);

		s--;

=======

	{
		_putchar(*s);

>>>>>>> edc2ded04026d5382b600f718f27a293d137631e
	}

	_putchar('\n');

}
<<<<<<< HEAD

	

=======
>>>>>>> edc2ded04026d5382b600f718f27a293d137631e
