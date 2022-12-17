#include "main.h"

/**
 * main - check the code.
 * function to check if character is lowercase
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
