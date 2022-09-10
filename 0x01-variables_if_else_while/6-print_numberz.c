#include <stdio.h>

/**
 *main - print 0-9 putchar x 2
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = '0';

while (n <= '9')
{
	putchar(n);
	n++;
}
putchar(10);

return (0);
}
