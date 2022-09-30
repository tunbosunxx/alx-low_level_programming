#include "main.h"
/**
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
/* suppress unused variable signal */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
