#include "main.h"

/**
 * base_len - calculate base length
 *
 * @n: number to be devised
 * @dev: deviser
 *
 * Return: lenght
 */


int base_len(int n, int dev)
{
	int len;

	len = 0;

	while (n  > 0)
	{
		n = n / dev;
		len++;
	}
	return (len);
}

/**
 * int_to_binary - switch int to binary
 *
 * @n: integer to be switched
 *
 * Return: binary forme of n
 */
char *int_to_binary(int n)
{
	char *bin;
	int len, i, is_p = 1;
	char *reversed;

	if (n < 0)
	{
		n = -n;
		is_p = 0;
	}
	len = base_len(n, 2);
	bin = malloc(sizeof(char) * (len + 1));
	if (bin == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < len; i++)
	{
		bin[i] = '0' + (n % 2);
		n = n / 2;
	}
	bin[len] = '\0';

	if (is_p == 0)
	{
		for (i = 0; bin[i] != '\0'; i++)
		{
			bin[i] = (bin[i] == '0') ? '1' : '0';
		}
	}
	reversed = arr_rev(bin);
	free(bin);
	return (reversed);
}

/**
 * int_to_octal - switch int to binary
 *
 * @n: integer to be switched
 *
 * Return: octal forme of n
 */


char *int_to_octal(unsigned int n)
{
	char *octal;
	int len, i;
	char *reversed;

	len = base_len(n, 8);
	octal = malloc(sizeof(char) * (len + 1));
	if (octal == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < len; i++)
	{
		octal[i] = '0' + (n % 8);
		n = n / 8;
	}
	octal[len] = '\0';

	reversed = arr_rev(octal);
	free(octal);
	return (reversed);
}

/**
 * int_to_hex - switch int to binary
 *
 * @n: integer to be switched
 *
 * Return: hex forme of n
 */

char *int_to_hex(int n)
{
	char *hex;
	int len, i;
	char *reversed;
	int mod;

	len = base_len(n, 16);
	hex = malloc(sizeof(char) * (len + 1));
	if (hex == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < len; i++)
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
	hex[len] = '\0';

	reversed = arr_rev(hex);
	free(hex);
	return (reversed);

}
/**
 * int_to_heX - switch int to binary
 *
 * @n: integer to be switched
 *
 * Return: hex forme of n
 */

char *int_to_heX(int n)
{
	char *hex;
	int len, i;
	char *reversed;
	int mod;

	len = base_len(n, 16);
	hex = malloc(sizeof(char) * (len + 1));
	if (hex == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < len; i++)
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
	hex[len] = '\0';

	reversed = arr_rev(hex);
	free(hex);
	return (reversed);

}






