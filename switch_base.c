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

	while (n / dev > 0)
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
	int len, i;

	len = base_len(n, 2);
	bin = malloc(sizeof(char) * (len + 1));
	if (bin == NULL)
	{
		return (NULL);
	}

	for (i = len; i >= 0; i--)
	{
		bin[i] = '0' + (n % 2);
		n = n / 2;
	}
	bin[len + 1] = '\0';

	return (bin);
}
