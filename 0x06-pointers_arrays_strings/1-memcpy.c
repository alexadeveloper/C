#include "holberton.h"

/**
  *_memcpy - copies n bytes from memory area
  *@dest: is an array
  *@src: is an array
  *@n: is a int
  *Return: the new bytes memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
