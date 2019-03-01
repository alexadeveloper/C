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
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", (a * b));
return (0);
}
