#include "variadic_functions.h"
#include <stdio.h>
/**
 *  print_numbers - prints out numbers given
 * @separator: string to be seperated between numbers
 * @n: number of arguements
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int k;

	va_start(numbers, n);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (k < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
