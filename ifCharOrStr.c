#include "main.h"

/**
 * is_char - to deal with characters.
 * @c: the character
 * @count: pointer to caharacters.
 * Return: the count.
*/
void is_char(int c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}


/**
 * is_string - to deal with strings.
 * @str: pointer of string.
 * @count: pointer of count the string.
 * Return: the count.
*/
void is_string(char *str, int *count)
{
	int ln;

	if (str == 0)
	{
		write(1, "(null)", 6);
		*count += 6;
	}
	else
	{
		for (ln = 0; str[ln] != '\0'; ln++)
			;
		write(1, str, ln);
		*count += ln;
	}
}
/**
 * is_percision - to deal with %.
 * @count:pointer to count.
 * Return: nothing
*/
void is_percision(int *count)
{
	write(1, "%&", 1);
	count++;
}
