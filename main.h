#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
=======

>>>>>>> b2ddd5fb3cf4e6da150e3ab1060f6c394ab37c17

int i;
char *s, c;
va_list args;


int _printf(const char *format, ...);
int _putchar(char c);
int _printf_char(va_list argt);
int _printf_str(va_list argt);
int _strlen(char *str);
int _strlenc(const char *str);
int _print_percent(void);



#endif
