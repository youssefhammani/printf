#include "main.h"
/**
 * print - print char.
 * @ptr: string.
 *
 * Return: string length.
 */

int print(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; ++i)
		_putchar(ptr[i]);

	return (i);
}
