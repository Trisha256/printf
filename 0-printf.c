#include "main.h"
/**
* _printf -  a function that produces output according to a format.
* @format: format specifier
* Return: int
*/
int handle_edge_cases(const char *format);

int _printf(const char *format, ...)
{
	int count = 0;

	if (handle_edge_cases(format) == -1)
		return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else if (format[i + 1] == 'c')
{
c = (char)va_arg(args, int);
_putchar(c);
count += 2;
i++;
}
else if (format[i + 1] == 's')
{
s = va_arg(args, char *);
while (*s != '\0')
{
	_putchar(*s);
	s++;
	count++;
}
count += 6;
i++;
}
else if (format[i + 1] == '%')
{
_putchar('%');
count += 2;
i++;
}
}
va_end(args);
return (count);
}
