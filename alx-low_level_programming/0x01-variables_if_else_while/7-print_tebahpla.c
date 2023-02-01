#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse order
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
