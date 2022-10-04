#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Duplicate a given String and return a pointer to the new one.
  *
  * @str : string pointer
  *
  * Return: a pointer to the new Duplicated string
  *
 **/

char *_strdup(char *str)
{
	char *Strcpy;
	int x, i; /* Loop counter variables */


	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	Strcpy = malloc((x + 1) * sizeof(char));
	if (Strcpy == NULL)
		return (NULL);
	for (i = 0; i < (x + 1); i++)
	{
		Strcpy[i] = str[i];
	}
	return (Strcpy);
}
