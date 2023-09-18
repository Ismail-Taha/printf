#include "main.h"

/**
 * pr_pointer - Prints a pointer in hexadecimal format with a '0x' prefix.
 * @args: The argument list containing the pointer to be printed
 *
 * Return: The number of characters printed
 */

int pr_pointer(va_list args)
{
	int count = 0;
	void *ptr = va_arg(args, void *);
	unsigned long addr = (unsigned long)ptr;
	char *hexa = int_to_hex(addr);

	if (!hexa)
		return (1);

	count = _puts("0x");
	count += _puts(hexa);
	free(hexa);

	return (count);
}
