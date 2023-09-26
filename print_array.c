#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - print an array
 * @array: array
 * @size: array size
 * Description: print an array of integers
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
