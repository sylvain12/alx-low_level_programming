#include <stdio.h>

/**
* main - Print base 10 number
* Return: 0
*/
int main(void)
{
	int i;
	char numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
		printf("%d", numbers[i]);
	printf("\n");
	return (0);
}
