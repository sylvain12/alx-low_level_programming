#include <stdio.h>

/**
* main - Prints alphabet
* Return: 0
*/
int main(void)
{
	int i;
	int j;
	int SIZE = 26;
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char alphabet_upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	for (i = 0; i < SIZE; i++)
		putchar(alphabet[i]);

	for (j = 0; j < SIZE; j++)
		putchar(alphabet_upper[j]);

	putchar('\n');
	return (0);
}
