#include "main.h"

/**
 * pr_num - prints a number send to this function
 * @n: number to be printed
 * Return: The number of arguments printed
 */
int pr_num(int n)
{
	int len;
	int dev;
	unsigned int num;

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

/**
 * pr_unsigned_num - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int pr_unsigned_num(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
