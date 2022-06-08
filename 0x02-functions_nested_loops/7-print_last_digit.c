#include <stdio.h>
#include <math.h>
#include "main.h"

/**
* print_last_digit - Print last digi of an number
* @n: Number
*
* Return: digit
*/
int print_last_digit(int n)
{
	int d = n % 10;
	_putchar(d + '0');
	return (d);
}	
