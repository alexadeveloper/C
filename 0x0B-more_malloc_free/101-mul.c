#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>

#include "holberton.h"
/**
  * _isdigit -  checks for a digit.
  * @c: is a int
  * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}

/**
 *main- multiplies two positive numbers
 *@argc: cantidad de argumentos
 *@argv: argumentos enviados
 *Return: the result
 */

int main(int argc, char *argv[])
{
	unsigned int resultado;
	unsigned int a, b;

	if (argc != 3)
	{
		printf("Error\n");
	exit(98);
	}
	a = _isdigit(atoi(argv[1]));
	b = _isdigit(atoi(argv[2]));
	if (a == 0 || b ==0)
	{
		printf("Error\n");
	exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	resultado = a * b;
return (resultado);
}
