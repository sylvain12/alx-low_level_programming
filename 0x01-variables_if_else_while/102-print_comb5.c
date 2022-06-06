#include <stdio.h>

/**
* main - Print number
* Return: 0
*/
int main(void)
{
	int i, j, k, l;
	int nums[10] = {'0', '2', '3', '4',
'5', '6', '7', '8', '9'};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (j != l && j < 9)
					{
						putchar(nums[i]);
						putchar(nums[j]);
						putchar(' ');
						putchar(nums[k]);
						putchar(nums[l]);
						if (i != 9 || j != 8 || k != 9 || l != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
