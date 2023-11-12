#include "main.h"
#include <string.h>

/**
 * handle_edge_cases - .....
 * @format: format specifier
 *
 * Return: 0 (success)
 */

int handle_edge_cases(const char *format)
{
	if (format == NULL)
	{
		return (-1);
	}
	else if (format[0] == '%' && (format[1] == ' ' || format[1] == '\0'))
	{
		return (-1);
	}
	return (0);
}
