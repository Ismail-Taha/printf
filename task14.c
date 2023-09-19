#include "main.h"

/**
* rot13 - encodes a string in rot13
* @str: string to be encoded
*
* Return: the resulting string
*/

int rot13(char *str)
{
	int i;
	int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == a[j])
			{
<<<<<<< HEAD
				_putchar(b[j]);
				break;
=======
				s[i] = b[j];
>>>>>>> fbdaeac7c5b354bd92077e9bf85b5247f52a0622
			}
		}
		if (j == 53)
			_putchar(str[i]);
	}
	return (i);
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

	return (rot13(str));
}
