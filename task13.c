#include "main.h"
/**
 * pr_reverse - print reverse of string
 * @args: list of arguments
 * Return: number of characters printed
 */


int pr_reverse(va_list args)
{
	int i = 0, j;
	char *str = va_arg(l, char *);

	if (!str)
		str = "(null)";

	while (str[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);

	return (i);
}
