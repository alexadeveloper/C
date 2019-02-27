#include "holberton.h"

/**
  *validar - test the root
  *@n: is a int
  *@o: is a int
  *Return: the root square
 */

int validar(int n, int o)
{
	if (n == o)
	{
		return (1);
	}
	if (n % o != 0)
	{
		return (validar(n, (o + 1)));
	}
	else
	return (0);
}
/**
  *is_prime_number - prime numbers
  *@n: is the number
  *Return: 1 it is a prime number 0 if no
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (validar(n, 2));
}
