#include "holberton.h"
#include <stdio.h>
/**
  *cap_string -capitalize all words of a string
  *@s: is a array
  *Return: an pointer
 */

char *cap_string(char *s)
{
	int i, j, k;
	int separadores[] = { 9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
		{
			j = s[i] - 32;
			s[i] = j;
		}
		else
		{
			for (k = 0; k <= 12; k++)
			{
				if (s[i] == separadores[k])
				{
					if (s[i + 1] >= 97 && s[i + 1] <= 122)
					{
						j = s[i + 1] - 32;
						s[i + 1] = j;
					}
				}
			}
		}
	}
return (s);
}
