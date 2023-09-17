#include "main.h"


/**
 * pr_unsigned_int - Prints Unsigned integers
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int pr_unsigned_int(va_list args)
{
	unsigned int n;
	int len;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (pr_unsigned_num(n));
	if (n < 0)
		return (-1);
	return (pr_unsigned_num(n));
}
