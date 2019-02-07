#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int l;
for (l = 'a' ; l <= 'z' ; l++)
{
if (l != 'q' && l != 'e')
{
	putchar(l);
}
}
putchar('\n');
return (0);
}
