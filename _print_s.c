#include "main.h"

/**
 * _print_str - prints string
 * @args: arguments
 * Return: 1
 */

int _print_str(va_list args)
{
	int p;
	int slength;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		slength = _strlen(str);
		for (p = 0; p < slength; p++)
			_putchar(str[p]);
		return (slength);
	}
	else
	{
		slength = _strlen(str);
		for (p = 0; p < slength; p++)
			_putchar(str[p]);
		return (slength);
	}
}

