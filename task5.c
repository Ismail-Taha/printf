#include "main.h"

/**
 * pr_string_special - Prints a string with non-printable char
 * @str : the special str
 * Return: The number of characters printed
 */
int pr_string_special(va_list args)
{
	int count = 0;
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += pr_hexa_char(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}

/**
 * pr_hexa_char - Prints a character in hexadecimal format
 * @c: The character to be printed
 * Return: The number of characters printed
 */
int pr_hexa_char(char c)
{
	char hex_digits[] = "0123456789ABCDEF";
	int count = 0;

	_putchar(hex_digits[(c >> 4) & 0xF]);
	_putchar(hex_digits[c & 0xF]);
	count += 2;

	return (count);
}
