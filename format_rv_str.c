#include "main.h"

/**
 * format_rv_str - Print a string in reverse
 * @list: List of arguments
 *
 * Return: Length of the string
 **/
int  format_rv_str(va_list list)
{
	int i, length;
	const char *str;

	str = va_arg(list, const char *);

	length = _strlen(str);

	for (i = length - 1; i >= 0; i--)
		_putchar(str[i]);

	return (length);
}
