#ifndef __HOLBERTON__H
#define __HOLBERTON__H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
