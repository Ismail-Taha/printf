#include "main.h"

/**
 * arr_rev - reverse an array in-place
 *
 * @arr: array to be reversed
 */
void arr_rev(char *arr)
{
	int length = 0;
	int i, j;
	char temp;

	if (arr == NULL)
		return;

	while (*arr)
		length++;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
