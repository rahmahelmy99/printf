#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * is_integer - count integer according to a format.
 * @num: input number.
 * @count: parameter number.
 * Return: nothing.
*/
void is_integer(int num, int *count)
{
	char buf[BUF_SIZE];
	int ln, is_negative;

	ln = 0;
	is_negative = 0;
	if (num == 0)
	{
		buf[ln] = '0';
		ln++;
	}
	if (num < 0)
	{
		is_negative = 1;
		num = -1 * num;
	}
	do {
		buf[ln++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);
	if (is_negative)
		buf[ln++] = '-';

	while (ln > 0)
	{
		write(1, &buf[--ln], 1);
		(*count)++;
	}
}
