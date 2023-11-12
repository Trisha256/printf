#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - The custom printf function
 * @format: The format string
 * @...: The variable number of arguments
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int character_print = 0;
	va_list list_args_for_char;

	if (format == NULL)
		{
			return (-1);
		}
	va_start(list_args_for_char, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			character_print++;
		}
		
		else
		{
			format++;
		}

		if (*format == 'd')
		{
			int num = va_arg(list_args_for_char, int);
			character_print += num;
		}

		else if (*format == '\0')
		{
			break;
		}
		
		else
		{
			character_print += (*format, va_arg(list_args_for_char, num));
		}
	}

	va_end(list_args_for_char);

	return character_print;
}
