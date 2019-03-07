#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>

/**
  *_strlen - returns the length of a string
  *@s: is a char
  *Return: the length of a string
  */
int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
return (cont);
}

/**
  * _isdigit -  checks for a digit.
  * @c: is a int
  * Return: Always 0 (Success)
 */
int _isdigit(char c)
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
	unsigned int a, b, i, conta, contb, aux;
	char *newa, *newb;

	if (argc != 3)
	{
		printf("Error\n");
	exit(98);
	}
	a = _strlen(argv[1]);
	newa = argv[1];
	aux = 0;
	for (i = 0; i < a; i++)
	{
		aux = _isdigit(newa[i]);
		if (aux == 0)
			conta++;
	}
	b = _strlen(argv[2]);
	aux = 0;
	newb = argv[2];
	for (i = 0; i < b; i++)
	{
		aux = _isdigit(newb[i]);
		if (aux == 0)
			contb++;
	}
	if (conta != 0 || contb != 0)
	{
		printf("Error\n");
	exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	resultado = a * b;
	printf("%d\n", resultado);
return (0);
}
