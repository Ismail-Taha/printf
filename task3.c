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

	if (n < 1)
		return (-1);

	return (pr_unsigned_num(n));
}

/**
 * pr_octal - Prints octal
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */

int pr_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (int_to_octal(n));
}

/**
 * pr_hexa - Prints hexadecimal
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int pr_hexa(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (int_to_hex(n));
}

/**
 * pr_heXa - Prints hexadecimal
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int pr_heXa(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (int_to_heX(n));
}
