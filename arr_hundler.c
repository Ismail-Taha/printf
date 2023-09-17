#include "main.h"
/**
 * arr_rev - reverse an array
 *
 * @arr: array to be reversed
 *
 * Return: reversed array
 */



char *arr_rev(char *arr)
{
	char *arr_r;
	int i = 0, j = 0;

	while (arr[i])
		i++;

	arr_r = malloc(sizeof(char) * i + 1);
	if (arr_r == NULL)
		return (NULL);
	i--;
	while (i >= 0)
	{
		arr_r[j] = arr[i];
		i--;
		j++;
	}
	arr_r[j] = '\0';

	free(arr);
	return (arr_r);
}
