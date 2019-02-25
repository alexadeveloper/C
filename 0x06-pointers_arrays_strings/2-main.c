#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
int main(void)
{
	    char *s = "hello";
	        char *f;

		    f = _strchr(s, 'e');
		        printf("%s\n", f);
		f = strchr(s, 'e');
		printf("f= %s\n", f);
		return (0);
}
