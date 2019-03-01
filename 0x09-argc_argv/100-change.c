#include <stdio.h>
#include <stdlib.h>

/**
  *main - cents give back
  *@argc: is a int
  *@argv: is a int
  *Return: 1 if there is a error
 */
int  main(int argc, char *argv[])
{
	int dinero, saldo, monedas;

	monedas =  0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	dinero = atoi(argv[1]);
	if (dinero >= 25)
	{
		saldo = dinero % 25;
		monedas = monedas + (dinero / 25);
		dinero = saldo;
	}
	if (dinero >= 10)
	{
		saldo = dinero % 10;
		monedas = monedas + (dinero / 10);
		dinero = saldo;
	}
	if (dinero >= 5)
	{
		saldo = dinero % 5;
		monedas = monedas + (dinero / 5);
		dinero = saldo;
	}
	if (dinero >= 2)
	{
		saldo = dinero % 2;
		monedas = monedas + (dinero / 2);
		dinero = saldo;
	}
	if (dinero >= 1)
	{
		monedas = monedas + (dinero / 1);
	}
	printf("%d\n", monedas);
return (0);
}
