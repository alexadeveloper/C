#include "holberton.h"

/**
  *_strstr - gets the lenght
  *@haystack: is a char
  *@needle: is a char
  *Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j])
			{
				j++;
				if (!needle[j])
				{
				return (haystack + i);
				}
			}
		}
	}
return (NULL);
}
