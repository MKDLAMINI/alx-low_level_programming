#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar (char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int definite_sqrt_recursion(int n, int index);
int definite_prime(int n, int index);
int validate_palindrome(char *s, int index, int length);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
