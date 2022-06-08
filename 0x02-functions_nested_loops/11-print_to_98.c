#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print prime value
* @n: start number
*/
int print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; n >= 98; i--)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; n <= 98; i++)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
