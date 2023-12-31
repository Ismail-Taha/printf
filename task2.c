#include "main.h"
/**
 * pr_binary - print binary of an integer
 * @args: list of arguments
 * Return: number of characters printed
 */


int pr_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (int_to_binary(n));
}
