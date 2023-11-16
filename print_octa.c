#include "main.h"

/**
 * _print_oct - prints octal numbers
 * @args: arguments
 * Return: count
 */

int _print_oct(va_list args)
{
	int i;
	int *array;
	int count = 0;
	unsigned int numb = va_arg(args, unsigned int);
	unsigned int tem = numb;

	while (numb / 8 != 0)
	{
		numb /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}

