#include <stdio.h>
#include "main.h"

/**
* main - Prints alphabet
* Return: 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
