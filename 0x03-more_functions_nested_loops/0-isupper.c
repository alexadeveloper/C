#include "holberton.h"
/**
 * _isupper -  checks for uppercase character.
 * @c: is a int
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
return (c >= 65 && c <= 90 ? 1 : 0);
}
