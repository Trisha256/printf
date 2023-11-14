#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/*FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16


/* SIZES */
#define S_LONG 2
#define S_SHORT 1


#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * struct format - converter for printf
 * @format: type char pointer of the specifier
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
int print_binary(va_list val);
int print_hex_int(va_list val);


#endif
