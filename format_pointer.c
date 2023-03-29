#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * format_pointer - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int format_pointer(va_list list)
{
	char *ptr_buff;
	int length;

	ptr_buff = int_asc(va_arg(list, unsigned long int), 16);

	if (!_strcmp(ptr_buff, "0"))
		return (print("(nil)"));

	length = print("0x");

	if (!_strcmp(ptr_buff, "-1"))
		length += print("ffffffffffffffff");
	else
		length += print(ptr_buff);

	return (length);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
