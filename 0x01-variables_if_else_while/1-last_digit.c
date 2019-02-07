#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		m = "and is greater than 5";
	}
	else if (n == 0)
	{
		m = "and is 0";
	}
	else
	{
		m = "and is less than 6 and not 0";
	}
	printf("Last digit of %d is %d %s\n", n, n % 10, m);
	return (0);
}
