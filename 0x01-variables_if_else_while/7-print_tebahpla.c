#include <stdio.h>

/**
 *main - print alphabet reversed
 *Return: Always 0 (Success)
 */

int main(void)
{
char alfa = 'z';

while (alfa >= 'a')
{
	putchar(alfa);
	alfa--;
}
putchar(10);

return (0);
}
