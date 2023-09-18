#include "main.h"
/**
 * pr_binary - print binary of an integer
 * @args: list of arguments
 * Return: number of characters printed
 */


int pr_binary(va_list args)
{
	int len = 0;
	int n = va_arg(args, unsigned int);
	char *bin = int_to_binary(n);

	if (n < 0)
		return (-1);
	if (bin == NULL)
		return (-1);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	len = _puts(bin);
	free(bin);

	return (len);
}
