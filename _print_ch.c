#include "main.h"

/**
 * _print_char - prints characters
 * @args: arguments
 * Return: 1.
 */

int _print_char(va_list args)
{
int ch = va_arg(args, int);
_putchar(ch);
return (1);
}
