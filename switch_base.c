#include "main.h"

/**
 * base_len - calculate base length
 *
 * @n: number to be devised
 * @dev: deviser
 *
 * Return: lenght
 */


unsigned int base_len(unsigned int n, int dev)
{
	int len;

	for (len = 0; n  > 0; len++)
	{
		n = n / dev;
	}
	return (len);
}

/**
 * int_to_binary - switch int to binary
 *
 * @n: integer to be switched
 *
 * Return: number of character printed
 */
int int_to_binary(unsigned int n)
{
	char *bin;
	int len = 0, i;

	len = base_len(n, 2);
	bin = malloc(sizeof(char) * (len + 1));
	if (bin == NULL)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (_putchar('0'));
	}
	for (i = 0 ; n > 0; i++)
	{
		if (n % 2 == 0)
			bin[i] = '0';
		else
			bin[i] = '1';
		n = n / 2;
	}
	bin[i] = '\0';
	i--;
	while (i >= 0)
	{
		_putchar(bin[i]);
		i--;
	}
	free(bin);
	return (len);
}

/**
 * int_to_octal - switch int to binary
 *
 * @n: integer to be switched
 *
 * Return: number of character printed
 */


int int_to_octal(unsigned int n)
{
	char *octal;
	int len, i;

	len = base_len(n, 8);
	octal = malloc(sizeof(char) * (len + 1));
	if (octal == NULL)
	{
		return (-1);
	}
	if (n == 0)
		return (putchar('0'));
	for (i = 0 ; n > 0; i++)
	{
		octal[i] = '0' + (n % 8);
		n = n / 8;
	}
	octal[i] = '\0';
	i--;
	while (i >= 0)
	{
		_putchar(octal[i]);
		i--;
	}
	free(octal);
	return (len);
}

/**
 * int_to_hex - switch int to binary
 *
 * @n: integer to be switched
 *
 * Return: number of characters printed
 */

int int_to_hex(unsigned int n)
{
	char *hex;
	int len, i;
	int mod;

	len = base_len(n, 16);
	hex = malloc(sizeof(char) * (len + 1));
	if (hex == NULL)
	{
		return (-1);
	}
	if (n == 0)
		return (_putchar('0'));
	for (i = 0; n > 0; i++)
	{
		mod = n % 16;
		if (mod < 10)
		{
			hex[i] = '0' + mod;
		} else
		{
			hex[i] = 'a' + mod - 10;
		}
		n = n / 16;
	}
	hex[i] = '\0';
	i--;
	while (i >= 0)
	{
		_putchar(hex[i]);
		i--;
	}
	free(hex);
	return (len);

}
/**
 * int_to_heX - switch int to binary
 *
 * @n: integer to be switched
 *
 * Return: number of characters printed
 */

int int_to_heX(unsigned int n)
{
	char *hex;
	int len, i;
	int mod;

	len = base_len(n, 16);
	hex = malloc(sizeof(char) * (len + 1));
	if (hex == NULL)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (_putchar('0'));
	}
	for (i = 0; n > 0; i++)
	{
		mod = n % 16;
		if (mod < 10)
		{
			hex[i] = '0' + mod;
		} else
		{
			hex[i] = 'A' + mod - 10;
		}
		n = n / 16;
	}
	hex[i] = '\0';
	i--;
	while (i >= 0)
	{
		_putchar(hex[i]);
		i--;
	}
	free(hex);
	return (len);

}






