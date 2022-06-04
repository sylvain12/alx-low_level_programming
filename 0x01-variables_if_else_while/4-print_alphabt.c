#include <stdio.h>

/**
* main - Prints alphabet
* Return: 0
*/
int main(void)
{
	int i;
	int SIZE = 26;
	char alphabet[]	= {'a', 'b', 'c', 'd', 'e', 'f', 'g',
'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < SIZE; i++)
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
			putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
