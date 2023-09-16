#include "main.h"

/**
 * puts - prints every character in a string
 *
 * @str: string to be printed
 */



void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

