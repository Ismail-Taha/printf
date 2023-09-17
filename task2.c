#include "main.h"
/**
 * pr_binary - print binary of an integer
 * @args: list of arguments
 * Return: number of characters printed
 */


int pr_binary(va_list args)
{
	unsigned int n;
	char *bin;
	int len = 0;
	char sign = '\0';

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	bin = int_to_binary(n);
	if (bin == NULL)
		return (-1);
	len = _puts(bin);
	free(bin);

	return (len);
}
