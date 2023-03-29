#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary format
 *
 * @n: The unsigned int to print
 */
void print_binary(unsigned int n)
{
    if (n > 1)
        print_binary(n >> 1);

    _putchar((n & 1) + '0');
}

/**
 * handle_binary - Handles the %b custom conversion specifier
 *
 * @args: A va_list containing the next argument
 * @buf:  A buffer to write the output to
 * @i:    A pointer to the current position in the buffer
 */
void handle_binary(va_list args, char *buf, int *i)
{
    unsigned int n = va_arg(args, unsigned int);
    int len = 0;

    print_binary(n);

    while (n >>= 1)
        len++;

    while (len-- > 0)
        buf[(*i)++] = ' ';

    buf[(*i)++] = '\0';
}
