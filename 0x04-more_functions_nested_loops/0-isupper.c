#include "main.h"

/**
 * _isupper - checks whether a character is uppercase
 * @c: character entered to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}