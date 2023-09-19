#include "main.h"
/**
 * pr_reverse - print reverse of string
 * @args: list of arguments
 * Return: number of characters printed
 */


int pr_reverse(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char *);
	char *bin;

	if (str == NULL)
	{
		str = "(null)";
	}
	bin = arr_rev(str);
	if (bin == NULL)
		return (-1);
	len = _puts(bin);
	free(str);
	free(bin);

	return (len);
}
