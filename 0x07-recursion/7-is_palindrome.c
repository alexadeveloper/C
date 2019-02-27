#include "holberton.h"
#include <stdio.h>
/**
  *_strlen_recursion - return the length of a string
  *@s: is the string
  *Return: the lengt
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
return (_strlen_recursion(s + 1) + 1);
}
/**
  *validar - test the root
  *@n: is a int
  *@o: is a int
  *Return: the root square
 */

int validar(char *s, int i, int j)
{
	if ((j - i) >= 0 && (j - i) <= 1)
	{
		return (1);
	}
	if (*(s + i) == *(s + j))
	{
		return (validar(s, (i + 1), (j - 1)));
	}
	else
	return (0);
}
/**
  *is_prime_number - prime numbers
  *@n: is the number
  *Return: 1 it is a prime number 0 if no
 */

int is_palindrome(char *s)
{
	int j = _strlen_recursion(s);

	if (j >= 0 && j <= 1)
	{
		return (1);
	}
	else
	return (validar(s, 0, (j - 1)));
}
