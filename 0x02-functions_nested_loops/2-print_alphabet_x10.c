#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Print alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
