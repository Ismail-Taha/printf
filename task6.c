#include "main.h"

/**
 * pr_pointer - print the address
 * @args: va_list
 * Return: addr
*/

int pr_pointer(va_list args)
{
	int addr;
	unsigned int var;
	char *buffer;

	var = va_arg(args, int);
	buffer = change_to_hex(var);
	addr = _puts("0x");
	addr += _puts(buffer);
	free(buffer);
	return (addr);
}

/**
 * change_to_hex - Convert an unsigned integer to hexa low
 * @n : the number to convert
 *
 * Return: A dynamically allocated string containing the converted number.
 */

char *change_to_hex(unsigned int n)
{
	char *hex;
	int len, i;
	int mod;
	char *rev;

	len = base_len(n, 16);
	hex = malloc(sizeof(char) * (len + 1));
	if (hex == NULL)
	{
		return (NULL);
	}
	if (n == 0)
	{
		hex[0] = '0';
		hex[1] = '\0';
		return(hex);
	}
	for (i = 0; n > 0; i++)
	{
		mod = n % 16;
		if (mod < 10)
		{
			hex[i] = '0' + mod;
		}
		else
		{
			hex[i] = 'a' + mod - 10;
		}
		n = n / 16;
	}
	hex[i] = '\0';
	rev = arr_rev(hex);
	free(hex);
	return (rev);
}
