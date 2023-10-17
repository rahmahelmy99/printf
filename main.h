#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 1024

int _putchar(char c);
int is_char(int c, int *count);
void is_string(char *str, int *count);
int _printf(const char *format, ...);

#endif
