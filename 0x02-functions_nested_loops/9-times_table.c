#include <stdio.h>
#include "main.h"

/**
* times_table - Sum to number
*/
char number_charracter(int n);

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

char number_charracter(int n)
{
	int i;
	char nums[82] = {'0', '1', '2', '3', '4', '5', '6',
'7', '8', '9', '10', '11', '12', '13', '14', '15', '16',
'17', '18', '19', '20', '21', '22', '23', '24', '25',
'26', '27', '28', '29', '30', '31', '32', '33', '34',
'35', '36', '37', '38', '39', '40', '41', '42', '43',
'44', '45', '46', '47', '48', '49', '50', '51', '52',
'53', '54','55', '56', '57', '58', '59', '60', '61',
'62', '63', '64', '65', '66', '67', '68', '69', '70',
'71', '72', '73', '74', '75', '76', '77', '78', '79',
'80', '81'};
	char result;

	for (i = 0; i <= 81; i++)
	{
		if (n == i)
		{
			result = nums[i];
			break;
		}
	}
	return (result);
}

