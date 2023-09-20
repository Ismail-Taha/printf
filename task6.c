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
		if (hexa != NULL)
		{
			count += _puts(hexa);
			free(hexa);
		}
		else
		{
			return (-1);
		}
	}

	return (count);
}

/**
 * convert - Convert an unsigned long integer to a specified base as a string.
 * @num: The number to convert.
 * @base: The base for conversion (e.g., 16 for hexadecimal).
 * @uppercase: Whether to use uppercase letters for hexadecimal
 *
 * Return: A dynamically allocated string containing the converted number.
 */
char *convert(unsigned long int num, int base, int uppercase)
{
	char buffer[64];
	char *result;
	int i = 0;
	int j = 0;
	char *hex_chars;

	if (uppercase)
		hex_chars = "0123456789ABCDEF";
	else
		hex_chars = "0123456789abcdef";


	if (num == 0)
	{
		result = malloc(2);
		if (!result)
			return (NULL);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}

	while (num > 0)
	{
		buffer[i++] = hex_chars[num % base];
		num /= base;
	}

	result = malloc(i + 1);
	if (!result)
		return (NULL);


	for (j = 0; i > 0; j++, i--)

		result[j] = buffer[i - 1];
	result[j] = '\0';

	return (result);
}
