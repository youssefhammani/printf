#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * format_hexadecimal_upp - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int format_hexadecimal_upp(va_list list)
{
	char *ptr_buff;
	int length;

	ptr_buff = int_asc(va_arg(list, unsigned int), 16);
	ptr_buff = string_to_upper(ptr_buff);

	length = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (length);
}

/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Character
 * Return: 1 or 0
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
