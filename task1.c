#include "main.h"


/**
 * pr_int - Prints an integer
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */


int pr_int(va_list args)
{
	int count;
	int n;

	n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		count = pr_num(n);
	}
	else
	{
		count = pr_num(n);
	}

	return (count);
}
