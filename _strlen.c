#include "main.h"


/**
 * _strlen - Calculate the length of a string
 * @ptr: input string
 *
 * Return: Length
 **/
int _strlen(const char *ptr)
{
	int i;

	for (i = 0; ptr[i] != 0; i++)
		;

	return (i);
}
