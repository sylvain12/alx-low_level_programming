#include <stdio.h>
#include "main.h"

/**
* main - Prints _putchar
* Return: 0
*/
int main(void)
{
	int i;
	char text[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	
	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
