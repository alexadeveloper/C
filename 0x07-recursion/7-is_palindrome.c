#include "holberton.h"
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
  *validar - test the string
  *@s: is a char
  *@i: is a int
  *@j: is a int
  *Return: if is a palindrome
 */

int validar(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (*(s + i) == *(s + j))
	{
		if (j - i == 1)
		return (1);
		else
		return (validar(s, (i + 1), (j - 1)));
	}
	else
	return (0);
}
/**
  *is_palindrome - return if is a palindrome
  *@s: is the string
  *Return: 1 it is a palindrome 0 if no
 */

int is_palindrome(char *s)
{
	int j = _strlen_recursion(s);

	if (j == 0 || j == 1)
	{
		return (1);
	}
	else
	return (validar(s, 0, (j - 1)));
}
