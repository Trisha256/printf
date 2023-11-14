#include "main.h"

/**
 * _print_str - prints string
 * @args: arguments
 * Return: length
 */

int _print_str(va_list args)
{
	const char *str = va_arg(args, const char *);
	int length;

	if (str == NULL)
	{
		str = "(null)";
		return (6);
	}
	while (*str != '\0')
	{
		_putchar(*str);
		length++;
		str++;
	}
	return (length);
}

