#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


unsigned int i;
char c, *s;
va_list args;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
