#include "main.h"

/**
 * main - check the code.
 * print_times_table-print multiplication table
 * @n: takes number input
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int prod, col, rows;

	if (n <= 15 && n >= 0)
	{
		for (rows = 0; rows <= n; ++rows)
		{
			_putchar(48);
			for (col = 1; col <= n; ++col)
			{
				_putchar(',');
				_putchar(' ');

				prod = rows * col;

				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + 48);
				}
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}	
}
