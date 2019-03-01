#include "holberton.h"
/**
  *_islower - check if a character is lowercase
  *@c: int paramater
  *Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
