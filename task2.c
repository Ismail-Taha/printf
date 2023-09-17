#include "main.h"
/**
 * pr_binary - print binary of an integer
 * @args: list of arguments
 * Return: number of characters printed
 */


int pr_binary(va_list args)
{
	int i = 0;
	unsigned int n;
	char *bin;
	int len;

	n = va_arg(args, unsigned int);
	
	bin = int_to_binary(n);

	len = _puts(bin);
	free(bin);

	return (len);
}
