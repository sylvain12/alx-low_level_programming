#include <stdio.h>
#include "main.h"

/**
* times_table - Sum to number
*/
void  times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			int	r  = (i * j);
			_putchar(number_charracter(r));
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
