#include "main.h"

/**
 * format_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int format_binary(va_list list)
{
	char *ptr_buff;
	int length;

	ptr_buff = int_asc(va_arg(list, unsigned int), 2);

	length = print(ptr_buff);

	return (length);
}
