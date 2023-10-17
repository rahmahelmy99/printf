#include "main.h"

/**
 * is_char - to deal with characters.
 * @c: the character
 * @count: pointer to caharacters.
 * Return: the count.
*/
int is_char(int c, int *count)
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
		write(1, "null", 4);
		*count += 4;
	}
	else
	{
		for (ln = 0; *str != '\0'; ln++)
			;
		write(1, str, ln);
		*count += ln;
	}
}
