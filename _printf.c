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

