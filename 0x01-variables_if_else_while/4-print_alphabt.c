#include <stdio.h>

/**
 *main - print lowercase letters a-z except 'q' and 'e'
 *Return: Always 0 (Success)
 */

int main(void)
{
/*while and if statements lowercase == letter*/

char letter = 'a';

while (letter <= 'z')
{
	if ((letter != 'e') && (letter != 'q'))
	{
		putchar(letter);
	}
	letter++;
}
putchar(10);

return (0);
}
