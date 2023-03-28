#include "main.h"

/**
 * format_integer - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/
int format_integer(va_list list)
{
	char *ptr_buff;
	int length;

	ptr_buff = int_asc(va_arg(list, int), 10);

	length = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (length);
}
