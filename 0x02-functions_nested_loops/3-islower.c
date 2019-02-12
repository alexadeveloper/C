#include "holberton.h"
/**
  *_is lower check if a character is lowercase
  *c is paramater
  *Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a'&& c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
