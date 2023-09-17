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
	unsigned int num;

	n = va_arg(args, int);
	len = 0;
	dev = 1;

	if (n < 0)
	{
		_putchar('-');
		num = n * (-1);
		len++;
	} else
	{
		num = n;
	}
	while (num / dev > 9)
	{
		dev *= 10;
	}
	while (dev != 0)
	{
		_putchar((num / dev) + '0');
		num = num % dev;
		dev /=  10;
		len++;
	}
	return (len);
}
