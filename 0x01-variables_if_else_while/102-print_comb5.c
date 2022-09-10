#include <stdio.h>

/**
 *main - print a num pair from 00-99 no dup
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;
	int a;
	int b;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (a = tens; a <= '9'; a++) /*print second of pair*/
			{
				for (b = ones + 1; b <= '9'; b++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(a);
					putchar(b);

					if (!((tens == '9' && ones == '9') && (a == '9' && b == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				a = '0'
				b = '0';
			}
		}
	}
	putchar(10);

	return (0);
}
