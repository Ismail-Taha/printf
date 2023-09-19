#include "main.h"

/**
 * pr_pointer - Prints a memory address in hexadecimal format with "0x" prefix
 * @arg: The argument list containing the memory address to be printed
 * Return: The number of characters printed
 */

int pr_pointer(va_list arg)
{
	unsigned long int ptr = va_arg(arg, unsigned long int);
	char *hexa;
	int count = 0;

	if (ptr == 0)
	{
		count += _puts("(nil)");
	}
	else
	{
		count += _puts("0x");
		hexa = convert(ptr, 16, 1);
		if (hexad != NULL)
		{
			count += _puts(hexad;
			free(hexa);
		}
		else
		{
			return (-1);
		}
	}

	return (count);
}
