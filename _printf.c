#include "printf.h"
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
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);

	counter = prf_looper(format, printers, ap);

	va_end(ap);

	return (count);
}

