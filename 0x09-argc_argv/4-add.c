#include <stdio.h>
#include <stdlib.h>

/**
  *main - multiplies two numbers
  *@argc: is a int
  *@argv: is a int
  *Return: 1 if there is a error
 */
int  main(int argc, char *argv[])
{
	int a, b, suma;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		b = atoi(argv[a]);
		if (*argv[a] != 48 && b == 0)
		{
			printf("Error\n");
		return (1);
		}
		suma = suma + b;
	}
	printf("%d\n", suma);
return (0);
}
