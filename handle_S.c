#include "main.h"

/**
 * handle_S - prints the string.
 * @str: input string
 *
 * Return: return count
 **/

int handle_S(char *str)
{
    int count = 0;
    while (*str)
    {
        if (*str >= 32 && *str < 127)
        {
            putchar(*str);
            count++;
        }
        else
        {
            putchar('\\');
            putchar('x');
            putchar((*str >> 4) + '0');
            putchar((*str & 0x0F) + ((*str & 0x0F) < 10 ? '0' : 'A' - 10));
            count += 4;
        }
        str++;
        count++;
    }
    return count;
}
