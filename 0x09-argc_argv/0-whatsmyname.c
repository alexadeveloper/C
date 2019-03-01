#include <stdio.h>

/**
  *main - return the name itself
  *@argv: the content of commands
  *Return: 0
 */
int  main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	printf("%s\n", argv[i]);
return (0);
}
