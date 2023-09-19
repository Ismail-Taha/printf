#include "main.h"

/**
* rot13 - encodes a string in rot13
* @s: string to be encoded
*
* Return: the resulting string
*/

char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}

	return (s);
}

/**
 * pr_rot13 - Prints a string in ROT13 encoding
 * @arg: The argument list containing the string to be printed
 * Return: The number of characters printed
 */

int pr_rot13(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	str = rot13(str);

	return (_puts(str));
}
