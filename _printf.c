#include "main.h"
#include <stdarg.h>
#include <unistd.h>
void select_sp(void);
/**
 * _printf - prototype function that produces output according
 * to a format.
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
			select_sp();
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
/**
 * select_sp - select speciefier of the format.
 * Return: nothing.
*/
void select_sp(void)
{
	va_list args;
	int count = 0;
	char *format;

	switch (*format)
	{
		case 'c':
			is_char(va_arg(args, int), &count);
			break;
		case 's':
			is_string(va_arg(args, char *), &count);
			break;
		case '%':
			write(1, "%", 1);
			count++;
			break;
		case 'd':
			is_integer(va_arg(args, int), &count);
			break;
		case 'i':
			is_integer(va_arg(args, int), &count);
			break;
		default:
			write(1, format - 1, 2);
			count += 2;
			break;
	}
}
