#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int l1, i, e;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[l1])
		l1++;

	a = malloc(sizeof(*a) * l1 + n + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0, e = 0; i < (l1 + n); i++)
	{
		if (i < l1)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[e++];
		}
	}
	a[i] = '\0';
	return (a);
}
