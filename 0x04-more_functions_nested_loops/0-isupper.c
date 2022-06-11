#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isupper - Check for upper character
* @c: character
* Return: 1 or 0
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
