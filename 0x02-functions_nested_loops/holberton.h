#ifndef _PUTCHAR
#define _PUTCHAR

#include <unistd.h>
#include <ctype.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c);
void print_alphabet();
void print_alphabet_x10(void);
int _islower(int c);
#endif
