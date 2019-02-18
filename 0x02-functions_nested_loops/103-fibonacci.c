#include<stdio.h>

/**
  *main - prints 50 fibonnaci
  *Return: 0
 */
int main(void)
{
	long int sum, a, b, total;

	total = 2;
	a = 1;
	b = 2;
	sum = 0;
	while (sum <= 4000000)
	{
		sum = a + b;
		if ((sum % 2) == 0 && sum <= 4000000)
		{
			total = total + sum;
		}
		a = b;
		b = sum;
	}
	printf("%ld", total);
	putchar('\n');
return (0);
}
