#include <stdio.h>

/**
 *main - print 0-9
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = 0;

while (n < 10)
{
	printf("%i", n);
	n++;
}
putchar(10);

return (0);
}
