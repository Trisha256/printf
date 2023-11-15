#include "main.h"

/**
 * _print_str - prints string
 * @args: arguments
 * Return: count
 */

int _print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}

