#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = '0';
int alphabet = 'a';

while (n <= '9') /*0-9*/
{
	putchar(n);
	n++;
}

while (alphabet <= 'f') /*hexbase*/
{
	putchar(alphabet);
	alphabet++;
}

putchar(10);

return (0);
}
