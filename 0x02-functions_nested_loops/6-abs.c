#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @n:input character
 * Return: Always 0.
 */

int _abs(int)
{
	int n;
	
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	
	return (0);
}