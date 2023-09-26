#include "sort.h"

/**
 * print_list - prints a list
 *
 * @list: The list to be printed
 * Description: print a list of integers
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
