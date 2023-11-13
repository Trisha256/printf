#include "main.h"

/**
 * _printf_str - prints string
 * @argt: arguments
 * Return: 1
 */

int _printf_str(va_list argt)
{
	int p;
	int slength;
	char *str;

	str = va_arg(argt, char *);
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

