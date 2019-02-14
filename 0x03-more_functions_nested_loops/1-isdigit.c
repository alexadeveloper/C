#include "holberton.h"
/**
 * _isdigit -  checks for a digit.
 * @c: is a int
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
return (c >= 48 && c <= 57 ? 1 : 0);
}
