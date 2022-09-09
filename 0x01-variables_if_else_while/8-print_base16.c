#include <stdio.h>
/**
  * main - Prints all numbers of base16 in lowercase
  *
  * Return: Always 0 (Success)
  *
  */
int main(void)
{
	int i;
	char alp;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
