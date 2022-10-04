#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
/**
  * str_concat - Concatenate/joins Two strings
  *
  * @s1 : pointer to the First String
  * @s2 : pointer to the Second string
  *
  * Return: A concatenated String from the two strings.
  *
 **/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, y; /*Variables to store the length of strings*/
	int a, b; /*loops variable*/

	/*Get the length of the two strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}

	/*Allocate memory to the new string*/
	concat = malloc((x + y + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/*Copy each string to the new string*/
	a = 0;
	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}

	b = 0;
	while (s2[b] != '\0')
	{
		concat[a] = s2[b];
		a++;
		b++;
	}
	concat[a] = '\0';
	return (concat);
}
