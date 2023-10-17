#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define BUF_SIZE 1024

bool is_invalid(const char *format);
void is_char(int c, int *count);
void is_percision( int *count);
void is_string(char *str, int *count);
void is_integer(int num, int *count);
int _printf(const char *format, ...);

#endif
