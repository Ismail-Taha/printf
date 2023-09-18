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
	if ((int)n < 0)
	{
		_putchar('-');
		len = pr_num((int)-n);
	}
	else
	{
		octal = int_to_octal((int)n);
		if (octal == NULL)
			return (-1);

		len = _puts(octal);
		free(octal);
	}

	return (len);
}

/**
 * pr_hexa - Prints hexadecimal
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int pr_hexa(va_list args)
{
	unsigned int n;
	char *hexa;
	int len = 0;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if ((int)n < 0)
	{
		_putchar('0');
		len = pr_num((int)-n);
	}
	else
	{

		hexa = int_to_hex(n);
		if (hexa == NULL)
			return (-1);

		len = _puts(hexa);
		free(hexa);
	}

	return (len);
}

/**
 * pr_heXa - Prints hexadecimal
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int pr_heXa(va_list args)
{
	unsigned int n;
	char *hexa;
	int len = 0;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if ((int)n < 0)
	{
		_putchar('-');
		len = pr_num((int)-n);
	}
	else
	{

		hexa = int_to_hex((int)n);
		if (hexa == NULL)
			return (-1);

		len = _puts(hexa);
		free(hexa);
	}

	return (len);
}
