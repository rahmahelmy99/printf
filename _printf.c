#include "main.h"

/**
 * _printf - prototype function that produces output according
 * to a format.
 * @format: the first variable of the variadic function.
 * Return: restult according to a format.
*/
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	va_start(args, format);
	if (invalid(format))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				is_char(va_arg(args, int), &count);
			else if (*format == 's')
				is_string(va_arg(args, char *), &count);
			else if (*format == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else
			{
				write(1, format - 1, 2);
				count += 2;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
