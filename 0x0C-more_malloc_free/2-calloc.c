#include "main.h"
/**
 * *_calloc - call
 * @nmemb: n
 * @size: size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memAlloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memAlloc = malloc(nmemb * size);
	if (memAlloc == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memAlloc + i) = 0;
	return ((void *)memAlloc);
}
