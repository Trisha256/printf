#include "main.h"
/**
 * print_binary - function that convert to binary
 * @val: the argument
 * Return: integer
 */

int print_binary(va_list val)
{
	int count = 0;

	unsigned int num = va_arg(val, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	{
		int i = 31;

		for (i = 31; i >= 0; i--)
		{
			unsigned int mask = 1 << i;
			int bit = (num & mask) ? 1 : 0;

			if (bit || count > 0)
			{
				_putchar(bit + '0');
				count++;
			}
		}
	}

	return (count);
}
