#include <stdio.h>

/**
 *main - lowercase and uppercase a-zA-Z with putchar
 *Return: Always 0 (Success)
*/

int main(void)
{
/*lowercase == low && uppercase == cap*/
char low = 'a';
char cap = 'A';

while (low <= 'z') /*print lowercases a-z*/
{
	putchar(low);
	low++;
}

while (cap <= 'Z') /*print uppercase A-Z*/
{
	putchar(cap);
	cap++;
}

putchar(10);

return (0);
}
