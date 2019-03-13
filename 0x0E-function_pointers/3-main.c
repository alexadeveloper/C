#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - performs simple operations
  *@argc: cant of arguments
  *@argv: value of the arguments
  *Return: the result or the error
 */

int main(int argc, char **argv)
{
	int a, b, resultado;
	int (*aux)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	aux = get_op_func(argv[2]);
	resultado = aux(a, b);
	printf("%d\n", resultado);
return (0);
}
