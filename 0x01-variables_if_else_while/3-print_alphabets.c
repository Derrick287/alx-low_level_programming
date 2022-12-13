#include <stdio.h>

/**
 * main - Entry point
 * print alphabet in lowercase then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*prints lower-case a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*print capital A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
