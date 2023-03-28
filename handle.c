#include "main.h"

/**
 * handle - Format controller
 * @ptr: String format
 * @list: List of arguments
 *
 * Return: Total size of arguments with the total size of the base string
 **/
int handle(const char *ptr, va_list list)
{
	int length, i, aux;

	length = 0;
	for (i = 0; ptr[i] != 0; i++)
	{
		if (ptr[i] == '%')
		{
			aux = percent_handle(ptr, list, &i);
			if (aux == -1)
				return (-1);

			length += aux;
			continue;
		}

		_putchar(ptr[i]);
		length = length + 1;
	}


	return (length);
}

/**
 * percent_handle - for percent format
 * @ptr: String format
 * @list: List of arguments
 * @i: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int percent_handle(const char *ptr, va_list list, int *i)
{
	int length, j, number_formats;
	format formats[] = {
		{'s', format_string}, {'c', format_char},
		{'d', format_integer}, {'i', format_integer},
		{'b', format_binary}, {'u', format_unsigned},
	};

	*i = *i + 1;

	if (ptr[*i] == '\0')
		return (-1);

	if (ptr[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (length = j = 0; j < number_formats; j++)
	{
		if (ptr[*i] == formats[j].type)
		{
			length = formats[j].f(list);
			return (length);
		}

	}

	_putchar('%'), _putchar(ptr[*i]);

	return (2);
}
