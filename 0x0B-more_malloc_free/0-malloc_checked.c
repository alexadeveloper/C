#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>

/**
  *malloc_checked- allocates memory
  *@b: is a size
  *Return: Value 0
 */

void *malloc_checked(unsigned int b)
{
	char *mymalo;

	mymalo = malloc(b);
	if (mymalo == NULL)
	{
		 exit(98);
	}
return (mymalo);
}
