#include <stdio.h>

/**
* main -  Prints possible value of 3 digits
* Return: 0
*/
int main(void)
{
	int i;
	int j;
	int nums[10] = {'0', '1', '2', '3', '4',
'5', '6', '7', '8', '9'};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j && i - 1 != j && i - 2 != j &&
i - 3 != j && i - 4 != j && i - 5 != j && i - 6 != j &&
i - 7 != j && i - 8 != j && i - 9 != j)
			{
				putchar(nums[i]);
				putchar(nums[j]);
				if (nums[i] != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
