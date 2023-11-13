#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

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

/**
 * struct fmt - Struct op by Peter and Patricia
 * @fmt: The format.
 * @fn: The function that is associated
 */

sgtruct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

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
