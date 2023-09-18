#include "main.h"
/**
 * pr_binary - print binary of an integer
 * @args: list of arguments
 * Return: number of characters printed
 */


int pr_binary(va_list args)
{
	int len = 0, i;
	unsigned int n = va_arg(args, unsigned int);
	char *bin;

	if (n < 0)
	{
		n = -n;
		is_p = 0;
	}

	bin = int_to_binary(n);

	if (bin == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (len = 0; bin[len] != '\0'; len++)
		_putchar(bin[len]);

	return (len);
}
