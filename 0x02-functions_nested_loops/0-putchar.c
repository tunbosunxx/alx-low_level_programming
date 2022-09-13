#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * print _putchar
 *
 * Return: Always 0.
*/

int main(void)
{
	char word[8] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(word[j]);
	}
	_putchar(10);
	return (0);
}
