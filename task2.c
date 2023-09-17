#include "main.h"


/**
 * pr_unsigned_int - Prints Unsigned integers
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int pr_unsigned_int(va_list args)
{
	int n;
	int len;

	n = va_arg(args, unsigned int);
	len = pr_unsigned_num(n);

	return (len);
}
