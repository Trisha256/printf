#include "main.h"

/**
 * _printf_char - prints characters
 * @argt: arguments
 * Return: 1.
 */

int _printf_char(va_list argt)
{
	char str;

	str = va_arg(argt, int);
	_putchar(str);
	return (1);
}
