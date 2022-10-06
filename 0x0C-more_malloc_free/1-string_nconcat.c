#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strCat;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	strCat = malloc(sizeof(char) * (i + n + 1));
	if (strCat == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strCat[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		strCat[i] = s2[j];
		i++, j++;
	}
	strCat[i] = '\0';
	return (strCat);
}
