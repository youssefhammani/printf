#include "main.h"

/**
 * format_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int format_string(va_list list)
{
	char *pt;
	int pt_len;

	pt = va_arg(list, char*);
	pt_len = print((pt != NULL) ? pt : "(null)");

	return (pt_len);
}
