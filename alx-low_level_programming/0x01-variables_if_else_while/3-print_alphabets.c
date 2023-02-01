#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabetsmall[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetcapital[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabetsmall[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(alphabetcapital[j]);
	}
	putchar('\n');
	return (0);
}
