#include "main.h"
/**
 * format_char - print character.
 * @list: va_list.
 *
 * Return: 1
 */
int format_char(va_list list)
{
	int aux;

	aux = va_arg(list, int);

	_putchar(aux);

	return (1);
}
