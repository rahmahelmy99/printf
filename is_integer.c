#include "main.h"

/**
 * is_integer - count integer according to a format.
 * @num: input number.
 * @count: parameter number.
 * Return: nothing.
*/
void is_integer(int num, int *count)
{
	char buffer[BUFF_SIZE];
	int ln, is_negative;

	ln = 0;
	is_negative = 0;
	if (num == 0)
	{
		buffer[ln++] = '0';
	}
	else
	{
		if (num < 0)
		{
			is_negative = 1;
			num = -num;
		}
		do {
			buffer[ln++] = '0' + (num % 10);
			num /= 10;
		} while (num > 0);
	}
	if (is_negative)
		buffer[ln++] = '-';

	while (ln > 0)
	{
		write(1, &buffer[--ln], 1);
		(*count)++;
	}
}
