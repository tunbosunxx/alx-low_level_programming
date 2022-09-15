#include "main.h"
/**
 * print_line - prints a line and characters long
 * @n: length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}
