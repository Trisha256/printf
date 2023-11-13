#include "main.h"

/**
* _print_int - prints integer
* @args: arguments
* Return: integer
*/

int _print_int(va_list args)
{
int num = va_arg(args, int);
return (printf("%d", num));
}

#include "main.h"
/**
* _print_dec - prints decimal numbers
* @args: arguments
* Return: int
*/

int _print_dec(va_list args)
{
int num = va_arg(args, int);
return (printf("%i", num));
}





