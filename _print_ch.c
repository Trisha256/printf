#include "main.h"

/**
 * _print_char - prints characters
 * @args: arguments
 * Return: 1.
 */

int _print_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}
