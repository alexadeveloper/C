#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - print the opcodes of its own main function
  *@cont: the num of arguments
  *@arg: the arguments send it
  *Return: null it is fails
 */

int main(int cont, char **arg)
{
	if (cont != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(arg[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
return (0);
}
