#include "main.h"

/**
 * format_octal - Print a unsigned octal
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int format_octal(va_list list)
{
	char *ptr_buff;
	int length;

	ptr_buff = int_asc(va_arg(list, unsigned int), 8);

	length = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (length);
}
