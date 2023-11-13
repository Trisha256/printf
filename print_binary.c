#include "main.h"
/**
* print_binary - function that convert to binary
* @val: the argument
* Return: integer
*/

int print_binary(va_list val)
{
int flag = 0;
int cont = 0;
int i, b;
unsigned int num = va_arg(val, unsigned int);

for (i = 31; i >= 0; i--)
{
if ((num >> i) & 1)
flag = 1;

if (flag)
{
b = (num >> i) & 1;
_putchar(b + '0');
cont++;
}
}

if (cont == 0)
{
cont++;
_putchar('0');
}

return (cont);
}
