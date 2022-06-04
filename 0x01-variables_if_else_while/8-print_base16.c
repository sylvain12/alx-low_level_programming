#include <stdio.h>

/**
* main - Print base 10 number
* Return: 0
*/
int main(void)
{
	int i;
	char numbers[16] = {'0', '1', '2', '3', '4',
'5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e',
'f'};

	for (i = 0; i < 16; i++)
		putchar(numbers[i]);
	putchar('\n');
	return (0);
}
