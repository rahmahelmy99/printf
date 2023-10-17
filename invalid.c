#include "main.h"

/**
 * invalid - to check the valid format.
 * @format: pointer to format.
 * Return: 1 is valid or 0 is invalid.
*/
int invalid(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
		return (1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (1);
	else (0)
}
