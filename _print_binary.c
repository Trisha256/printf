#include "main.h"
/**
 * _print_binary - function prints binary representation of an unsigned int
 * @val: va_list argument containing the unsigned int to be conveted
 * Return: The number of characters printed.
 */

int _print_binary(va_list val)
{
	int flag = 0;
	int char_count = 0;
	int i, bit, digit;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int mask;

	for (i = 31; i >= 0; i--)
	{
		mask = 1u << i;
		bit = (num & mask) ? 1 : 0;

		if (bit || flag)
		{
			flag = 1;
			digit = bit + '0';
			_putchar(digit);
			char_count++;
		}
	}

	if (char_count == 0)
	{
		_putchar('0');
		char_count++;
	}

	return (char_count);
}
