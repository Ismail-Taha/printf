#include "main.h"

/**
 * _puts - function that print a string
 *
 * @str: string to be printed
 * Return: length.
 */

int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

