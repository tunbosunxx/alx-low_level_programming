#include <stdio.h>

/**
 *main - result lower case a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
char alpha = 'a';

while (alpha <= 'z')
{
	putchar(alpha);
	alpha++;
}
putchar(10);

return (0);
}
