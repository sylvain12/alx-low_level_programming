#include <stdio.h>

/**
* main - Prints alphabet
* Return: 0
*/
int main(void)
{
	int i;
	char alphabet[]	= {'a', 'b', 'c', 'd', 'e', 'f', 'g',
'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 25; i >= 0; i--)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
