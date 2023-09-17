#include "main.h"

/**
 * pr_num - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int pr_num(va_list args)
{
	int n;
	int len;
	int dev;

	n = va_arg(args, int);
	len = 0;
	dev = 1;

	if (n < 0)
	{
		_putchar('-');
		len++;
	}
	while (n / 10 > 9)
	{
		dev *= 10;
	}
	while (dev != 1)
	{
		n = n / dev;
		_putchar(n + '0');
		n = n % dev;
		dev = dev / 10;
		len++;
	}
	return (len);
}
