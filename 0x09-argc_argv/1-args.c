#include <stdio.h>

/**
  *main - return the name itself
  *@argc: the content of commands
  *@argv: the char
  *Return: 0
 */
int  main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
return (0);
}
