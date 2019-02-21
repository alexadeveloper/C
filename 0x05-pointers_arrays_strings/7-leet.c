#include "holberton.h"

/**
  *leet -encode a string into 1337
  *@s: is a array
  *Return: an pointer
 */

char *leet(char *s)
{
	int i, j;
	char origen[] = { 97, 65, 101, 69, 111, 79, 116, 84, 108, 76 };
	char destino[] = { 52, 52, 51, 51, 48, 48, 55, 55, 49, 49 };

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == origen[j])
			{
				s[i] = destino[j];
			}
		}
	}
return (s);
}
