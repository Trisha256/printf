#include "main.h"

/**
 * _print_char - prints characters
 * @args: arguments
 * Return: 1.
 */

int _print_char(va_list args)
{
int ch = va_arg(args, int);
return (_putchar(ch));
}
