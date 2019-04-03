#include "holberton.h"
/**
  *read_textfile - read a text file and print it
  *@filename: the name of the file
  *@letters: number of letters
  *Return: the number of letter read and print, it is fail return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *new;
	int abrir;
	ssize_t leer;
	ssize_t escribir;

	if (filename == NULL)
		return (0);
	new = malloc(sizeof(char) * letters);
	if (new == NULL)
		return (0);
	abrir = open(filename, O_RDONLY);
	if (abrir == -1)
	{
		free(new);
	return (0);
	}
	leer = read(abrir, new, letters);
	if (leer == -1)
	{
		free(new);
		close(abrir);
	return (0);
	}
	escribir = write(STDOUT_FILENO, new, leer);
	if (escribir == -1)
	{
		free(new);
		close(abrir);
	return (0);
	}
	close(abrir);
	free(new);
return (escribir);
}
