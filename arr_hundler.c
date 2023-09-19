#include "main.h"

/**
 * arr_rev - reverse an array in-place
 *
 * @arr: array to be reversed
 *
 * Return: reversed string
 */
char *arr_rev(char *arr)
{
	int length = 0;
	int i, j;
	char *reversed;

	if (arr == NULL)
		return (NULL);

	while (arr[length] != '\0')
		length++;

	reversed = malloc(length + 1);
	if (reversed == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = length - 1; j > 0; i++, j--)
	{
		reversed[i] = arr[j];
	}

	reversed[i] = '\0';
	return (reversed);
}
