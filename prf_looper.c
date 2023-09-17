#include "main.h"

/**
 * prf_looper - looper that loops throught format
 *
 * @format: its the format to be printed
 * @printers: functions that print each type
 * @ap: list of arguments
 *
 * Return: numbers of character to be printed
 */

int prf_looper(const char *format, func_printer printers[], va_list ap)
{
	int i, j, val, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; printers[j].symb != NULL; j++)
			{
				if (format[i + 1] == printers[j].symb[0])
				{
					val = printers[j].print_func(ap);
					if (val == -1)
						return (-1);
					count += val;
					break;
				}
			}
			if (printers[j].symb == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				} else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
