#include "main.h"
/**
* _printf -  a function that produces output according to a format.
* @format: format specifier
* Return: int
*/
int _printf(const char *format, ...)
{
convert p[] = {
{"%s", _print_str},
{"%c", _print_char},
{"%%", _print_percent},
{"%i", _print_int},
{"%d", _print_dec},
{"%b", print_binary}
};

va_list args;
int k = 0;
int l;
int count = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && !format[1]))
	return (-1);
while (format[k] != '\0')
{
l = (sizeof(p) / sizeof(p[0])) - 1;
while (l >= 0)
{
if (p[l].format[0] == format[k] && p[l].format[1] == format[k + 1])
{
count += p[l].function(args);
k = k + 2;
goto Here;
}
--l;
}
_putchar(format[k]);
count++;
k++;
Here:
continue;
}

va_end(args);
return (count);
}

