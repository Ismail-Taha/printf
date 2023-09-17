#include "main.h"


/**
 * pr_unsigned_int - Prints Unsigned integers
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int pr_unsigned_int(va_list args)
{
	unsigned int n;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (pr_unsigned_num(n));
	return (pr_unsigned_num(n));
}

/**
 * pr_octal - Prints octal
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */

int pr_octal(va_list args)
{
	unsigned int n;
	char *octal;
	int len = 0;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	octal = int_to_octal(n);
	if (bin == NULL)
		return (-1);

	len = _puts(octal);
	free(octal);

	return (len);
}
