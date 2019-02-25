#include "holberton.h"

/**
  *_strpbrk - gets the lenght
  *@s: is an array
  *@accept: is an array
  *Return: the num accept into s
 */


{
	int i, j;
	unsigned int cont;

	cont = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont++;
			}
		}
	}
return (i - cont);
}
