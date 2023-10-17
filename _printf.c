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

	va_list (args, format);
	if (invalid(foramt))
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
		}
	}
}
