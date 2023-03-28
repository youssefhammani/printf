#include "main.h"
/**
 * format_unsigned - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int format_unsigned(va_list list)
{
	char *ptr_buff;
	int length;

	ptr_buff = int_asc(va_arg(list, unsigned int), 10);

	length = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (length);
}
