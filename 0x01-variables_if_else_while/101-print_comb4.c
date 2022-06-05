#include <stdio.h>

/**
* main -  Prints possible value of 3 digits
* Reteurn: 0
*/
int main(void)
{
	int i;
	int j;
	int y;
	int num[10] = {'0', '1', '2', '3', '4',
'5', '6', '7', '8', '9'};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (y = 0; y < 10; y++)
			{
				if (i != j && j != y && i != y && i < j && j < y)
				{
					putchar(num[i]);
					putchar(num[j]);
					putchar(num[y]);
					if (i != 7 ||  j != 8 || y != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
