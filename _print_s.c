#include "main.h"

/**
 * _print_str - prints string
 * @args: arguments
 * Return: 1
 */

int _print_str(va_list args)
{
	const char *str = va_arg(args, const char *);
	int length;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		_putchar(*str);
		length++;
		str++;
	}
	return (length);
	
}

