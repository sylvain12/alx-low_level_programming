#include <stdio.h>
#include "main.h"

/**
* print_sign - Check for alphabetic charater
* @n: Number to check
*
* Return: 1, 0 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if ( n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
}	
