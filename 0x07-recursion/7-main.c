#include "holberton.h"
#include <stdio.h>

/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
int main(void)
{
	    int r;
	    	r = is_palindrome("abcddcba");
		printf("%d\n", r);
	        r = is_palindrome("level");
		    printf("%d\n", r);
		        r = is_palindrome("reader");
			    printf("%d\n", r);
			        r = is_palindrome("");
				    printf("%d\n", r);
				        r = is_palindrome("a");
					    printf("%d\n", r);
					        return (0);
}
