#include "main.h"

/**
* _print_int - prints integer
* @args: arguments
* Return: integer
*/

int _print_int(va_list args)
{
int  m = va_arg(args, int);
int numb, end = m % 10, value, _exp = 1;
int i = 1;

m = m / 10;
numb = m;

if (end < 0)
{
_putchar('-');
numb = -numb;
m = -m;
end = -end;
i++;
}
if (numb > 0)
{
while (numb / 10 != 0)
{
_exp = _exp * 10;
numb = numb / 10;

}
numb = m;
while (_exp > 0)
{
value = numb / _exp;
_putchar(value + '0');
_exp = _exp / 10;
i++;
}
}
_putchar(end + '0');
return (i);
}

#include "main.h"
/**
* _print_dec - prints decimal numbers
* @args: arguments
* Return: int
*/

int _print_dec(va_list args)
{
int  m = va_arg(args, int);
int numb, end = m % 10, value, _exp = 1;
int i = 1;

m = m / 10;
numb = m;

if (end < 0)
{
_putchar('-');
numb = -numb;
m = -m;
end = -end;
i++;
}
if (numb > 0)
{
while (numb / 10 != 0)
{
_exp = _exp * 10;
numb = numb / 10;

}
numb = m;
while (_exp > 0)
{
value = numb / _exp;
_putchar(value + '0');
_exp = _exp / 10;
i++;
}
}
_putchar(end + '0');
return (i);
}





