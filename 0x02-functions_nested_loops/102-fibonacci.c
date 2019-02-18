#include<stdio.h>

/**
  *main - prints 50 fibonnaci
  *Return: 0
 */
int main(void)
{
	long int sum, a, b, cont;

	cont = 0;
	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	while (cont <= 47)
	{
		sum = a + b;
		printf("%ld", sum);
		if (cont != 47)
		{
			printf(", ");
		}
		a = b;
		b = sum;
		cont++;
	}
	putchar('\n');
return (0);
}
