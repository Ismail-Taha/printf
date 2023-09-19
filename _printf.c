#include "main.h"
#include <stdarg.h>


/**
 * _printf - home made printf
 *
 * @format: array of things to be printed
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	func_printer printers[] = {
		{"c", pr_char},
		{"s", pr_string},
		{"%", pr_percent},
		{"i", pr_int},
		{"d", pr_int},
		{"b", pr_binary},
		{"u", pr_unsigned_int},
		{"o", pr_octal},
		{"x", pr_hexa},
		{"X", pr_heXa},
		{"S", pr_string_special},
		{"p", pr_pointer},
		{"r", pr_reverse},
		{"R", pr_rot13},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);

	count = prf_looper(format, printers, ap);

	va_end(ap);

	return (count);
}

