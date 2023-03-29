#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>



/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handle(const char *, va_list);
int percent_handle(const char *, va_list, int *);

/*format*/
int format_string(va_list);
int format_char(va_list);
int format_integer(va_list);
int format_unsigned(va_list);
int format_binary(va_list);
int format_hexadecimal_low(va_list);
int format_hexadecimal_upp(va_list);
int format_octal(va_list);
int format_rot(va_list);
int format_pointer(va_list);
int format_rv_str(va_list);
int handle_S(char *str);

/*utulities*/

int _strlen(const char *ptr);
int print(char *ptr);
char *int_asc(long int, int);

/*putchar*/
int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
