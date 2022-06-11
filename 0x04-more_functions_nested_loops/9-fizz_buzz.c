#include <stdio.h>
#include "main.h"

/**
* main - FizzBuzz
* Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			if (i != 100)
			{
				_putchar(' ');
			}
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			if (i != 100)
				_putchar(' ');
		}
		else if (i % 3)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			if (i != 100)
				_putchar(' ');
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	return (0);
}
