#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string.
 *
 * Return: The number of characters printed
 **/
int _printf(const char *format, ...)
{
	int length;
	va_list args;

	if (format == NULL)
		return (-1);

	length = _strlen(format);
	if (length <= 0)
		return (0);

	va_start(args, format);
	length = handle(format, args);

	_putchar(-1);
	va_end(args);

	return (length);
}
