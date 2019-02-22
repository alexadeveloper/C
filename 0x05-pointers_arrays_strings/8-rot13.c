#include "holberton.h"

/**
  *rot13 -encode a string using rot13
  *@s: is a array
  *Return: an pointer
 */

char *rot13(char *s)
{
	int i, j;
	char origen[] = {"abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ"};
	char destino[] = {"nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == origen[j])
			{
				s[i] = destino[j];
				break;
			}
		}
	}
return (s);
}
