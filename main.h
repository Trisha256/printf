#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */


typedef struct {
	const char *format;
	int (*function)(va_list);
} convert;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _print_str(va_list args);
int _strlen(char *str);
int _strlenc(const char *str);
int _print_percent(va_list args);
int _print_int(va_list args);
int _print_dec(va_list args);



#endif
