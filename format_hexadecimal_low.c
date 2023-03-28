#include "main.h"

/**
 * format_hexadecimal_low - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int format_hexadecimal_low(va_list list)
{
	char *ptr_buff;
	int length;

	ptr_buff = int_asc(va_arg(list, unsigned int), 16);

	length = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (length);
}
