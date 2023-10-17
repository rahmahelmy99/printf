#include "main.h"
#include <stdbool.h>

/**
 * is_invalid - function to Check if format is valid.
 * @format: the format string
 *
 * Return: true if invalid, false if valid.
*/

bool is_invalid(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
		return (true);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (true);
	return (false);
}
