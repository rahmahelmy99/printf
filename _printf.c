#include "main.h"
/**
 * _printf - prototype function that produces output according to a format.
 * @format: the first variable of the variadic function.
 * Return: restult according to a format.
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (is_invalid(format))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					is_char(va_arg(args, int), &count);
					break;
				case 's':
					is_string(va_arg(args, char *), &count);
					break;
				case '%':
					write(1, "%&", 1);
					count++;
					break;
				case 'd':
				case 'i':
					is_integer(va_arg(args, int), &count);
					break;
				default:
					write(1, format - 1, 2);
					count += 2;
					break;
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
