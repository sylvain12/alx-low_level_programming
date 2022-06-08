#include <stdio.h>
#include "main.h"

/**
* print_alphabet - Prints alphabet
* Return: 0
*/
void print_alphabet()
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
