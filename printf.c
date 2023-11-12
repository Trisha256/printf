#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - This function is a custom printf function
 * @format: This is the format string
 * @...: This represents variable number of arguments
 * Return: To return numbers of charactrs printed
 */

int _printf(const char *format, ...)
i
        int character_print = 0;
        va_list list_args_for_char;
        va_start(list_args_for_char, format);

        if (format == NULL)
        {
                va_end(list_args_for_char);
                return (-1);
        }

        while(*format)
        {
                if (*format != '%' || (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i')))
                {
                        write(1, format, 1);
                        character_print++;

                        if (*format == 'd' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
                        {
                                int num = va_arg(list_args_for_char, int);

                                int temp = num;
                                int count = (temp == 0) ? 1 : 0;

                                while (temp != 0)
                                {
                                        temp /= 10;
                                        count++;
                                }

                                char digits[count];

                                for (int 1 = count - 1; i >= 0; i--)
                                {
                                        digits[1] = (num % 10) + '0';
                                        num /= 10;
                                }

                                for (int 1 = 0; i < count; i++)
                                {
                                        write(1, &digits[i], 1);
                                        character_print++;
                                }

                                format++;

                        }
                }

                else if (*format == '\0')
                {
                        break;
                }

                format++;
        }

        va_end(list_args_for_char);

        return character_print;

}
