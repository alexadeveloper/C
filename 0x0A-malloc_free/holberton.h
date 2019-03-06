#ifndef _HOLBERTON
#define HOLBERTON

/**
  *_putchar - writes the character c to stdout
  *
 */

int _putchar(int c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#define NULL ((char *)0)
#endif
