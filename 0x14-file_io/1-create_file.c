#include "holberton.h"
/**
  *create_file - vreates a file
  *@filename: the name of the file
  *@text_content: terminated string to write
  *Return: 1 it is ok, it is fail return -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t escribir;
	int i, count, abrir;

	if (filename == NULL)
		return (-1);
	abrir = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (abrir == -1)
	{
	return (-1);
	}
	if (text_content == NULL)
	{
		close(abrir);
	return (1);
	}
	count = 0;
	for (i = 0; text_content[i] != 0; i++)
	{
		count++;
	}
	escribir = write(abrir, text_content, count);
	if (escribir == -1)
	{
		close(abrir);
	return (-1);
	}
	close(abrir);
return (1);
}
